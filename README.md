# IRC Server

This project implements an Internet Relay Chat (IRC) server in C++98, adhering to the IRC protocol standards. It allows multiple clients to connect, communicate in channels, and utilize various IRC commands.

## Features

- Multi-client support with non-blocking I/O
- User authentication
- Channel creation and management
- Private messaging
- Channel operator privileges and commands (KICK, INVITE, TOPIC, MODE)
- Compliance with C++98 standard

## Bonus Features

### ProfanityPatrol Bot

The server includes a custom bot called ProfanityPatrol, which can be invited to channels by moderators. This bot:
- Detects profanity in channel messages
- Sends warning messages to users who use inappropriate language
- Can kick users for repeated violations if configured to do so

### File Transfer

The bonus version of the server supports file transfer between clients.

## Building the Project

To build the standard IRC server, use the provided Makefile:

```bash
make
```

This will compile the source files and create the `ircserv` executable.

To build the version with bonus features, use:

```bash
make bonus
```

This will compile the source files including the bonus features and create the `ircserv_bonus` executable.

## Usage

Run the standard server with the following command:

```bash
./ircserv <port> <password>
```

For the bonus version:

```bash
./ircserv_bonus <port> <password>
```

- `<port>`: The port number on which the server will listen for incoming connections
- `<password>`: The connection password required for clients to authenticate

## Connecting to the Server

Use any standard IRC client to connect to the server. Make sure to provide the correct port and password when configuring your client connection.

## Commands

The server supports standard IRC commands, including but not limited to:

- `/nick`: Set or change nickname
- `/join`: Join a channel
- `/part`: Leave a channel
- `/privmsg`: Send private messages
- `/kick`: Kick a user from a channel (operator only)
- `/invite`: Invite a user to a channel (operator only)
- `/topic`: Set or view channel topic (operator only for setting)
- `/mode`: Change channel modes (operator only)

### Bonus Commands

- `/send`: Initiate file transfer (bonus version only)
- `/accept`: Accept incoming file transfer (bonus version only)

## Using the ProfanityPatrol Bot

1. The bot must be invited to a channel by an operator:
   ```
   /invite ProfanityPatrol #channel_name
   ```
2. Once in the channel, the bot will automatically monitor for profanity.
3. Channel operators can configure the bot's behavior using special commands (details can be added here).

## Development

This project is developed in C++98 and uses standard POSIX socket programming. It employs a single `poll()` (or equivalent) call to handle all I/O operations non-blockingly.