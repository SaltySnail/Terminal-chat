typedef struct message_header_t {
	char type;
	char error;
	unsigned int room;
	char name[40];
	unsigned int payload_length;
} message_header;

typedef struct packet_t {
	struct message_header_t header;
	char payload[1000];
} packet;