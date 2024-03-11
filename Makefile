mojo_echo_daemon:
	${CXX} -o mojo_echo_daemon mojo_echo_daemon.cc
.PHONY:
clean:
	rm -rf *~
	rm mojo_echo_daemon
