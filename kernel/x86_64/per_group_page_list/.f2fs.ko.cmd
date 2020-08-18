cmd_fs/f2fs/f2fs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds  --build-id  -o fs/f2fs/f2fs.ko fs/f2fs/f2fs.o fs/f2fs/f2fs.mod.o ;  true
