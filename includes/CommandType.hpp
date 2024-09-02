#pragma once
#ifndef COMMANDTYPE_HPP
# define COMMANDTYPE_HPP

#include <string>

enum CommandType {
	
	CMD_PASS,
	CMD_NICK,
	CMD_USER,
	CMD_JOIN,
	CMD_PRIVMSG,
	CMD_UNKNOWN
};

CommandType getCommandType( const std::string &command );

#endif /* COMMANDTYPE_HPP */