/**
 * @file	RedisClientString.cpp
 * @brief CRedisClient 的 String 方法。
 *
 * @author: 		yuhaiyang
 * @date: 		2015年6月14日
 *
 * 修订说明:初始版本
 */

#include "Command.h"
#include "CRedisClient.h"

//-----------------------------string method--------------------------------------
//void CRedisClient::set(const std::string &key, const std::string &value)
//{
//    _socket.clearBuffer();
//
//    Command cmd( "SET" );
//    cmd << key << value;
//   _sendCommand( cmd );
//
//    _replyOk();
//}
//
//int8_t CRedisClient::get(const std::string &key,CResult &value)
//{
//    _socket.clearBuffer();
//
//    Command cmd( "GET" );
//    cmd << key ;
//    _sendCommand( cmd );
//
//    return _replyBulk( value );
//}
//
//
