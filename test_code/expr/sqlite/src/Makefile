
#CROSS=arm-linux-gnueabi-

# Reciepe for Mobibenchs
# mobibench = mobibench.c + sqlite3.c
# mobibench_atomic = mobibenc.c + sqlite3_atomic.c
# mobibench_datomic = mobiench.c + sqlite3_datomic.c
# mobibench_lsmvbt = mobibnech.c + sqlite3_lsmcvt.c
# mobibench_MFAW = mobibench.c + sqlite3_MFAW.c
# mobibench_MFAW_NODMA = mobibench.c + sqlite3_MFAW_NODMA.c
# mobibench_MFAW_NOFLUSH = mobibench.c + sqlite3_MFAW_NOFLUSH.c
# mobibench_MFAW_NOFLUSHDMA = mobibench.c + sqlite3_MFAW_NOFLUSHDMA.c
# mobibench_QTxFS = mobibench_QTxFS.c + sqlite3_TxFS.c
# mobibench_QTxFS_fsync = mobiench_QTxFS_fsync.c + sqlite3_TxFS.c
# mobibench_TxFS = mobibench.c + sqlite3_TxFS.c
# mobibench_WAL = mobibench.c + sqlite3_WAL.c

EXENAME = mobibench_QTxFS

SRCS = mobibench_QTxFS.c \
	  sqlite3.c

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
