src=$(wildcard ./*.c)
obj=$(patsubst %.c, %.o, $(src))

main:$(obj)
	gcc $^ -o $@
%.o:%.c
	gcc -g -c $< -o $@

clean:
	rm -f $(obj) main
