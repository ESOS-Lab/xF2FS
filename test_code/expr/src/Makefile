
#CROSS=arm-linux-gnueabi-

EXENAME = mobibench_MFAW_3

SRCS = mobibench_3.c \
	  sqlite3_MFAW.c

INSTALL = install

prefix = /usr/local
bindir = $(prefix)/bin

CFLAGS = -I/usr/include -I/opt/toolchains/aarch64-linux-android-4.9/lib/gcc/aarch64-linux-android/4.9.x/include -lpthread -ldl

#CFLAGS += -DDEBUG_SCRIPT

#for sqltie3
CFLAGS += -DNDEBUG=1 \
     -DHAVE_USLEEP=1 \
     -DSQLITE_HAVE_ISNAN \
     -DSQLITE_DEFAULT_JOURNAL_SIZE_LIMIT=1048576 \
     -DSQLITE_THREADSAFE=2 \
     -DSQLITE_TEMP_STORE=3 \
     -DSQLITE_POWERSAFE_OVERWRITE=1 \
     -DSQLITE_DEFAULT_FILE_FORMAT=4 \
     -DSQLITE_DEFAULT_AUTOVACUUM=1 \
     -DSQLITE_ENABLE_MEMORY_MANAGEMENT=1 \
     -DSQLITE_ENABLE_FTS3 \
     -DSQLITE_ENABLE_FTS3_BACKWARDS \
     -DSQLITE_ENABLE_FTS4 \
     -DSQLITE_DEFAULT_FILE_PERMISSIONS=0666 \
	 -DSQLITE_OMIT_BUILTIN_TEST \
     -DSQLITE_OMIT_COMPILEOPTION_DIAGS \
     -DSQLITE_OMIT_LOAD_EXTENSION \
     -DUSE_PREAD64 \
	 -DSQLITE_F2FS_MFAW \
	 -DHAVE_FDATASYNC \
     --static

all :
	$(CROSS_COMPILE)gcc -g -o $(EXENAME) $(SRCS) $(CFLAGS)

clean :
	@rm -rf mobibench

install : $(EXENAME)
	@$(INSTALL) -m 755 -d $(DESTDIR)$(bindir)
	@$(INSTALL) $(EXENAME) $(DESTDIR)$(bindir)
