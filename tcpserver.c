/*
 * tcpserver.c
 * 
 * Copyright 2018 U-DESKTOP-UFJULB5\neoge <neoge@DESKTOP-UFJULB5>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <memory.h>
#include <errno.h>
#include "common.h"

#define SERVER_PORT 2000
test_struct_t test_struct;
result_struct_t res_struct;
char data_buffer[1024];

void setup_tcp_server_communication() {
	int master_sock_tcp_fd = 0,
		sent_recv_bytes = 0,
		addr_len = 0,
		opt = 1;
		
	int comm_socket_fd = 0;
	
	fd_set readfds;
	
	struct sockaddr_in server_addr,
					   client_addr;
					   
	if ((master_sock_tcp_fd = socket(AF_NET, SOCK_STREAM, IPPROTO_TCP)) == -1)
	{
		printf("Socket creation failed\n");
		exit(1);
	}
	
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = SERVER_PORT;	
		
	server_addr.sin_addr.s_addr = INADDR_ANY;
	
	addr_len = sizeof(struct sockaddr);
}


int main(int argc, char **argv)
{
	setup_tcp_server_communication();
	return 0;
}

