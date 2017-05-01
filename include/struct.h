/*
** struct.h for struct in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris/include
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Feb 20 16:45:35 2017 clement girard
** Last update Mon Feb 27 12:57:30 2017 clement girard
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef char	**(*f)(int, char**, char**);
char		**my_flag_l(int, char**, char**);
char		**my_flag_kl(int, char**, char**);
char		**my_flag_kr(int, char**, char**);
char		**my_flag_kt(int, char**, char**);
char		**my_flag_kd(int, char**, char**);
char		**my_flag_kq(int, char**, char**);
char		**my_flag_kp(int, char**, char**);
char		**my_flag_map(int, char**, char**);
char		**my_flag_w(int, char**, char**);
f		fct[] = { my_flag_l, my_flag_kl, my_flag_kr, my_flag_kt, my_flag_kd, my_flag_kq, my_flag_kp, my_flag_map, my_flag_w };

#endif /* !STRUCT_H */
