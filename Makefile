
BINS=smacshim.so

all: $(BINS)

%.so: %.c
	$(CC) $(CFLAGS) -m32 -shared -fPIC -o $@ $^ -ldl

clean:
	rm -f $(BINS)
