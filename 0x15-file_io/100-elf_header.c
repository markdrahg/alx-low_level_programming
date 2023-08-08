#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>

#define ELF_MAGIC_SIZE 4

typedef struct {
    unsigned char e_ident[ELF_MAGIC_SIZE];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

void print_elf_header_info(const Elf64_Ehdr *header) {
    printf("Magic:   %02x %02x %02x %02x\n", header->e_ident[0], header->e_ident[1], header->e_ident[2], header->e_ident[3]);

    printf("Class:                             %d-bit\n", header->e_ident[4] == 1 ? 32 : (header->e_ident[4] == 2 ? 64 : -1));

    printf("Data:                              %s\n", header->e_ident[5] == 1 ? "2's complement, little endian" : (header->e_ident[5] == 2 ? "2's complement, big endian" : "Unknown"));

    printf("Version:                           %d\n", header->e_ident[6]);

    printf("OS/ABI:                            %d\n", header->e_ident[7]);

    printf("ABI Version:                       %d\n", header->e_ident[8]);

    printf("Type:                              %u\n", header->e_type);

    printf("Entry point address:               %lu\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {

    int fd;

    Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 98;
    }

    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        perror("Error reading ELF header");
        close(fd);
        return 98;
    }

    if (header.e_ident[0] != 0x7F || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F') {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_header_info(&header);

    close(fd);
    return 0;
}

