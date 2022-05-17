# stds
STDS: String type dynamyc and simple (ispired by sds of antirez)
# stds

## the struct

```c
typedef char *string;

typedef struct std{

	int size;

	char str[];

}Std;
```
