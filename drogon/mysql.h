/* Copyright (C) 2000 MySQL AB & MySQL Finland AB & TCX DataKonsult AB
                 2012 by MontyProgram AB

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02111-1301, USA */

/* defines for the libmariadb library */

#ifndef _mysql_h
#define _mysql_h

<r/include/mariadb/mysql.h" [readonly] 891L, 41230C           1,1           Top
/* Copyright (C) 2000 MySQL AB & MySQL Finland AB & TCX DataKonsult AB
                 2012 by MontyProgram AB

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02111-1301, USA */

/* defines for the libmariadb library */

#ifndef _mysql_h
#define _mysql_h

<r/include/mariadb/mysql.h" [readonly] 891L, 41230C           1,1           Top
/* Copyright (C) 2000 MySQL AB & MySQL Finland AB & TCX DataKonsult AB
                 2012 by MontyProgram AB

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02111-1301, USA */

/* defines for the libmariadb library */

#ifndef _mysql_h
#define _mysql_h

<r/include/mariadb/mysql.h" [readonly] 891L, 41230C           1,1           Top
/* Copyright (C) 2000 MySQL AB & MySQL Finland AB & TCX DataKonsult AB
                 2012 by MontyProgram AB

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02111-1301, USA */

#ifndef _mysql_h
#define _mysql_h

#ifdef  __cplusplus
extern "C" {
#endif

#ifndef LIBMARIADB
#define LIBMARIADB
#endif
#ifndef MYSQL_CLIENT
#define MYSQL_CLIENT
#endif

#include <stdarg.h>

#include <sys/types.h>
typedef char my_bool;
typedef unsigned long long my_ulonglong;

#if !defined(_WIN32)
#define STDCALL
#else
#define STDCALL __stdcall
#endif

#ifndef my_socket_defined
#define my_socket_defined
#if defined(_WIN64)
#define my_socket unsigned long long
#elif defined(_WIN32)
#define my_socket unsigned int
#else
typedef int my_socket;
#endif
#endif
#endif
#include "mariadb_com.h"
#include "mariadb_version.h"
#include "ma_list.h"
#endif
#endif
#endif
#include "mariadb_com.h"
#include "mariadb_version.h"
#include "ma_list.h"
#include "mariadb_ctype.h"


typedef struct st_ma_const_string
{
  const char *str;
  size_t length;
} MARIADB_CONST_STRING;


#ifndef ST_MA_USED_MEM_DEFINED
#define ST_MA_USED_MEM_DEFINED
  typedef struct st_ma_used_mem {   /* struct for once_alloc */
    struct st_ma_used_mem *next;    /* Next block in use */
  } MA_USED_MEM;
    MA_USED_MEM *pre_alloc;
extern unsigned int mysql_port;
#define IS_NOT_NULL(n)  ((n) & NOT_NULL_FLAG)
#define IS_BLOB(n)      ((n) & BLOB_FLAG)
#define IS_NUM_FIELD(f)  ((f)->flags & NUM_FLAG)

  typedef struct st_mysql_field {
    char *name;                 /* Name of column */
    char *db;                     /* table schema (added after 3.23.58) */
    char *catalog;                /* table catalog (added after 3.23.58) */
    char *def;                  /* Default value (set by mysql_list_fields) */
    unsigned long length;               /* Width of column */
    unsigned long max_length;   /* Max width of selected set */
  /* added after 3.23.58 */
    unsigned int name_length;
    unsigned int org_name_length;
    unsigned int table_length;
    unsigned int org_table_length;
    unsigned int db_length;
    unsigned int catalog_length;
    unsigned int def_length;
  /***********************/
    unsigned int flags;         /* Div flags */
    unsigned int decimals;      /* Number of decimals in field */
    unsigned int charsetnr;       /* char set number (added in 4.1) */
    enum enum_field_types type; /* Type of field. Se mysql_com.h for types */
    void *extension;              /* added in 4.1 */
  } MYSQL_FIELD;

  typedef char **MYSQL_ROW;             /* return data as array of strings */
  typedef unsigned int MYSQL_FIELD_OFFSET; /* offset to current field */

#define SET_CLIENT_ERROR(a, b, c, d) \
  do { \
    (a)->net.last_errno= (b);\
    strncpy((a)->net.sqlstate, (c), SQLSTATE_LENGTH);\
    (a)->net.sqlstate[SQLSTATE_LENGTH]= 0;\
    strncpy((a)->net.last_error, (d) ? (d) : ER((b)), MYSQL_ERRMSG_SIZE - 1);\
    (a)->net.last_error[MYSQL_ERRMSG_SIZE - 1]= 0;\
  } while(0)

/* For mysql_async.c */
                                                              136,1         13%
/* Copyright (C) 2000 MySQL AB & MySQL Finland AB & TCX DataKonsult AB
                 2012 by MontyProgram AB

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02111-1301, USA */

/* defines for the libmariadb library */

#ifndef _mysql_h
#define _mysql_h

                                                              1,1           Top
  int (*db_stmt_fetch_to_bind)(MYSQL_STMT *stmt, unsigned char *row);
  void (*db_stmt_flush_unbuffered)(MYSQL_STMT *stmt);
  void (*set_error)(MYSQL *mysql, unsigned int error_nr, const char *sqlstate, const char *format, ...);
  void (*invalidate_stmts)(MYSQL *mysql, const char *function_name);
  struct st_mariadb_api *api;
};

/* synonyms/aliases functions */
#define mysql_reload(mysql) mysql_refresh((mysql),REFRESH_GRANT)
#define mysql_library_init mysql_server_init
#define mysql_library_end mysql_server_end

/* new api functions */

#define HAVE_MYSQL_REAL_CONNECT


#ifdef  __cplusplus
}
#endif

#endif
                                                              891,1         Bot
/* Copyright (C) 2000 MySQL AB & MySQL Finland AB & TCX DataKonsult AB
                 2012 by MontyProgram AB

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02111-1301, USA */

/* defines for the libmariadb library */

#ifndef _mysql_h
#define _mysql_h

-- VISUAL --                                        891       1,1           Top
  int (*db_command)(MYSQL *mysql,enum enum_server_command command, const char *arg,
                    size_t length, my_bool skipp_check, void *opt_arg);
  void (*db_skip_result)(MYSQL *mysql);
  int (*db_read_query_result)(MYSQL *mysql);
  MYSQL_DATA *(*db_read_rows)(MYSQL *mysql,MYSQL_FIELD *fields, unsigned int field_count);
  int (*db_read_one_row)(MYSQL *mysql,unsigned int fields,MYSQL_ROW row, unsigned long *lengths);
  /* prepared statements */
  my_bool (*db_supported_buffer_type)(enum enum_field_types type);
  my_bool (*db_read_prepare_response)(MYSQL_STMT *stmt);
  int (*db_read_stmt_result)(MYSQL *mysql);
  my_bool (*db_stmt_get_result_metadata)(MYSQL_STMT *stmt);
  my_bool (*db_stmt_get_param_metadata)(MYSQL_STMT *stmt);
  int (*db_stmt_read_all_rows)(MYSQL_STMT *stmt);
  int (*db_stmt_fetch)(MYSQL_STMT *stmt, unsigned char **row);
  int (*db_stmt_fetch_to_bind)(MYSQL_STMT *stmt, unsigned char *row);
  void (*db_stmt_flush_unbuffered)(MYSQL_STMT *stmt);
  void (*set_error)(MYSQL *mysql, unsigned int error_nr, const char *sqlstate, const char *format, ...);
  void (*invalidate_stmts)(MYSQL *mysql, const char *function_name);
  struct st_mariadb_api *api;
                                                              860,1         98%
/* Copyright (C) 2000 MySQL AB & MySQL Finland AB & TCX DataKonsult AB
                 2012 by MontyProgram AB

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02111-1301, USA */

/* defines for the libmariadb library */

#ifndef _mysql_h
#define _mysql_h

-- VISUAL --                                        891       1,1           Top
  int (*db_stmt_fetch_to_bind)(MYSQL_STMT *stmt, unsigned char *row);
  void (*db_stmt_flush_unbuffered)(MYSQL_STMT *stmt);
  void (*set_error)(MYSQL *mysql, unsigned int error_nr, const char *sqlstate, const char *format, ...);
  void (*invalidate_stmts)(MYSQL *mysql, const char *function_name);
  struct st_mariadb_api *api;
};

/* synonyms/aliases functions */
#define mysql_reload(mysql) mysql_refresh((mysql),REFRESH_GRANT)
#define mysql_library_init mysql_server_init
#define mysql_library_end mysql_server_end

/* new api functions */

#define HAVE_MYSQL_REAL_CONNECT


#ifdef  __cplusplus
}
#endif

#endif
-- VISUAL --                                        y         891,1         Bot
/* Copyright (C) 2000 MySQL AB & MySQL Finland AB & TCX DataKonsult AB
                 2012 by MontyProgram AB

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
   MA 02111-1301, USA */

#ifndef _mysql_h
#define _mysql_h

#ifdef  __cplusplus
extern "C" {
#endif

#ifndef LIBMARIADB
#define LIBMARIADB
#endif
#ifndef MYSQL_CLIENT
#define MYSQL_CLIENT
#endif

#include <stdarg.h>

#include <sys/types.h>
typedef char my_bool;
typedef unsigned long long my_ulonglong;

#if !defined(_WIN32)
#define STDCALL
#else
#define STDCALL __stdcall
#endif

#ifndef my_socket_defined
#define my_socket_defined
#if defined(_WIN64)
#define my_socket unsigned long long
#elif defined(_WIN32)
#define my_socket unsigned int
#else
typedef int my_socket;
#endif
#endif
#endif
#include "mariadb_com.h"
#include "mariadb_version.h"
#include "ma_list.h"
#include "mariadb_ctype.h"


typedef struct st_ma_const_string
{
  const char *str;
  size_t length;
} MARIADB_CONST_STRING;


#ifndef ST_MA_USED_MEM_DEFINED
#define ST_MA_USED_MEM_DEFINED
  typedef struct st_ma_used_mem {   /* struct for once_alloc */
    struct st_ma_used_mem *next;    /* Next block in use */
  } MA_USED_MEM;
    MA_USED_MEM *pre_alloc;
extern unsigned int mysql_port;
#define IS_NOT_NULL(n)  ((n) & NOT_NULL_FLAG)
#define IS_BLOB(n)      ((n) & BLOB_FLAG)
#define IS_NUM_FIELD(f)  ((f)->flags & NUM_FLAG)

  typedef struct st_mysql_field {
    char *name;                 /* Name of column */
    char *db;                     /* table schema (added after 3.23.58) */
    char *catalog;                /* table catalog (added after 3.23.58) */
    char *def;                  /* Default value (set by mysql_list_fields) */
    unsigned long length;               /* Width of column */
    unsigned long max_length;   /* Max width of selected set */
  /* added after 3.23.58 */
    unsigned int name_length;
    unsigned int org_name_length;
    unsigned int table_length;
    unsigned int org_table_length;
    unsigned int db_length;
    unsigned int catalog_length;
    unsigned int def_length;
  /***********************/
    unsigned int flags;         /* Div flags */
    unsigned int decimals;      /* Number of decimals in field */
    unsigned int charsetnr;       /* char set number (added in 4.1) */
    enum enum_field_types type; /* Type of field. Se mysql_com.h for types */
    void *extension;              /* added in 4.1 */
  } MYSQL_FIELD;

  typedef char **MYSQL_ROW;             /* return data as array of strings */
  typedef unsigned int MYSQL_FIELD_OFFSET; /* offset to current field */

#define SET_CLIENT_ERROR(a, b, c, d) \
  do { \
    (a)->net.last_errno= (b);\
    strncpy((a)->net.sqlstate, (c), SQLSTATE_LENGTH);\
    (a)->net.sqlstate[SQLSTATE_LENGTH]= 0;\
    strncpy((a)->net.last_error, (d) ? (d) : ER((b)), MYSQL_ERRMSG_SIZE - 1);\
    (a)->net.last_error[MYSQL_ERRMSG_SIZE - 1]= 0;\
  } while(0)

/* For mysql_async.c */
#define set_mariadb_error(A,B,C) SET_CLIENT_ERROR((A),(B),(C),0)
extern const char *SQLSTATE_UNKNOWN;
#define unknown_sqlstate SQLSTATE_UNKNOWN

#define CLEAR_CLIENT_ERROR(a) \
  do { \
    (a)->net.last_errno= 0;\
    strcpy((a)->net.sqlstate, "00000");\
    (a)->net.last_error[0]= '\0';\
    if ((a)->net.extension)\
      (a)->net.extension->extended_errno= 0;\
  } while (0)

#define MYSQL_COUNT_ERROR (~(unsigned long long) 0)


  typedef struct st_mysql_rows {
    struct st_mysql_rows *next;         /* list of rows */
    MYSQL_ROW data;
    unsigned long length;
  } MYSQL_ROWS;

  typedef MYSQL_ROWS *MYSQL_ROW_OFFSET; /* offset to current row */

  typedef struct st_mysql_data {
    MYSQL_ROWS *data;
    void *embedded_info;
    MA_MEM_ROOT alloc;
    unsigned long long rows;
    unsigned int fields;
    void *extension;
  } MYSQL_DATA;

  enum mysql_option
  {
    MYSQL_OPT_CONNECT_TIMEOUT,
    MYSQL_OPT_COMPRESS,
    MYSQL_OPT_NAMED_PIPE,
    MYSQL_INIT_COMMAND,
    MYSQL_READ_DEFAULT_FILE,
    MYSQL_READ_DEFAULT_GROUP,
    MYSQL_SET_CHARSET_DIR,
    MYSQL_SET_CHARSET_NAME,
    MYSQL_OPT_LOCAL_INFILE,
    MYSQL_OPT_PROTOCOL,
    MYSQL_SHARED_MEMORY_BASE_NAME,
    MYSQL_OPT_READ_TIMEOUT,
    MYSQL_OPT_WRITE_TIMEOUT,
    MYSQL_OPT_USE_RESULT,
    MYSQL_OPT_USE_REMOTE_CONNECTION,
    MYSQL_OPT_USE_EMBEDDED_CONNECTION,
    MYSQL_OPT_GUESS_CONNECTION,
    MYSQL_SET_CLIENT_IP,
    MYSQL_SECURE_AUTH,
    MYSQL_REPORT_DATA_TRUNCATION,
    MYSQL_OPT_RECONNECT,
    MYSQL_OPT_SSL_VERIFY_SERVER_CERT,
    MYSQL_PLUGIN_DIR,
    MYSQL_DEFAULT_AUTH,
    MYSQL_OPT_BIND,
    MYSQL_OPT_SSL_KEY,
    MYSQL_OPT_SSL_CRL,
    MYSQL_ENABLE_CLEARTEXT_PLUGIN,
    MYSQL_OPT_TLS_VERSION,

    /* MariaDB specific */
    MYSQL_PROGRESS_CALLBACK=5999,
    MYSQL_OPT_NONBLOCK,
    /* MariaDB Connector/C specific */
    MYSQL_DATABASE_DRIVER=7000,
    MARIADB_OPT_TLS_PASSPHRASE,     /* passphrase for encrypted certificates */
    MARIADB_OPT_TLS_CIPHER_STRENGTH,
    MARIADB_OPT_TLS_VERSION,
    MARIADB_OPT_CONNECTION_READ_ONLY,
    MYSQL_OPT_CONNECT_ATTRS,        /* for mysql_get_optionv */
    MARIADB_OPT_USERDATA,
    MARIADB_OPT_CONNECTION_HANDLER,
    MARIADB_OPT_PORT,
    MARIADB_OPT_UNIXSOCKET,
    MARIADB_OPT_PASSWORD,
    MARIADB_OPT_HOST,
    MARIADB_OPT_USER,
    MARIADB_OPT_SCHEMA,
    MARIADB_OPT_DEBUG,
    MARIADB_OPT_FOUND_ROWS,
    MARIADB_OPT_MULTI_RESULTS,
    MARIADB_OPT_MULTI_STATEMENTS,
    MARIADB_OPT_INTERACTIVE,
    MARIADB_OPT_PROXY_HEADER,
    MARIADB_OPT_IO_WAIT
  };

  enum mariadb_value {
    MARIADB_CHARSET_ID,
    MARIADB_CHARSET_NAME,
    MARIADB_CLIENT_ERRORS,
    MARIADB_CLIENT_VERSION,
    MARIADB_CLIENT_VERSION_ID,
    MARIADB_CONNECTION_ASYNC_TIMEOUT,
    MARIADB_CONNECTION_ASYNC_TIMEOUT_MS,
    MARIADB_CONNECTION_MARIADB_CHARSET_INFO,
    MARIADB_CONNECTION_ERROR,
    MARIADB_CONNECTION_ERROR_ID,
    MARIADB_CONNECTION_HOST,
    MARIADB_CONNECTION_INFO,
    MARIADB_CONNECTION_PORT,
    MARIADB_CONNECTION_PROTOCOL_VERSION_ID,
    MARIADB_CONNECTION_PVIO_TYPE,
    MARIADB_CONNECTION_SCHEMA,
    MARIADB_CONNECTION_SERVER_TYPE,
    MARIADB_CONNECTION_SERVER_VERSION,
    MARIADB_CONNECTION_SERVER_VERSION_ID,
    MARIADB_CONNECTION_SOCKET,
    MARIADB_TLS_LIBRARY,
    MARIADB_CONNECTION_TLS_VERSION,
    MARIADB_CONNECTION_TLS_VERSION_ID,
    MARIADB_CONNECTION_USER,
    MARIADB_MAX_ALLOWED_PACKET,
    MARIADB_NET_BUFFER_LENGTH,
    MARIADB_CONNECTION_SERVER_STATUS,
    MARIADB_CONNECTION_SERVER_CAPABILITIES,
    MARIADB_CONNECTION_EXTENDED_SERVER_CAPABILITIES,
    MARIADB_CONNECTION_CLIENT_CAPABILITIES
  };

  enum mysql_status { MYSQL_STATUS_READY,
                      MYSQL_STATUS_GET_RESULT,
                      MYSQL_STATUS_USE_RESULT,
                      MYSQL_STATUS_QUERY_SENT,
                      MYSQL_STATUS_SENDING_LOAD_DATA,
                      MYSQL_STATUS_FETCHING_DATA,
                      MYSQL_STATUS_NEXT_RESULT_PENDING,
                      MYSQL_STATUS_STMT_RESULT
  };

  enum mysql_protocol_type
  {
    MYSQL_PROTOCOL_DEFAULT, MYSQL_PROTOCOL_TCP, MYSQL_PROTOCOL_SOCKET,
    MYSQL_PROTOCOL_PIPE, MYSQL_PROTOCOL_MEMORY
  };

struct st_mysql_options {
    unsigned int connect_timeout, read_timeout, write_timeout;
    unsigned int port, protocol;
    unsigned long client_flag;
    char *host,*user,*password,*unix_socket,*db;
    struct st_dynamic_array *init_command;
    char *my_cnf_file,*my_cnf_group, *charset_dir, *charset_name;
    char *ssl_key;                              /* PEM key file */
    char *ssl_cert;                             /* PEM cert file */
    char *ssl_ca;                                       /* PEM CA file */
    char *ssl_capath;                           /* PEM directory of CA-s? */
    char *ssl_cipher;
    char *shared_memory_base_name;
    unsigned long max_allowed_packet;
    my_bool use_ssl;                            /* if to use SSL or not */
    my_bool compress,named_pipe;
    char *bind_address;
    my_bool secure_auth;
    my_bool report_data_truncation;
    int (*local_infile_read)(void *, char *, unsigned int);
    void (*local_infile_end)(void *);
    int (*local_infile_error)(void *, char *, unsigned int);
    void *local_infile_userdata;
    struct st_mysql_options_extension *extension;
  typedef struct st_mysql {
    NET         net;                    /* Communication parameters */
    void  *unused_0;
    const struct ma_charset_info_st *charset;      /* character set */
    MYSQL_FIELD *fields;
    MA_MEM_ROOT field_alloc;
    unsigned long long affected_rows;
    unsigned long long extra_info;              /* Used by mysqlshow */
    unsigned long thread_id;            /* Id for connection in server */
    unsigned long packet_length;
    unsigned int port;
    unsigned long client_flag;
    unsigned long server_capabilities;
    unsigned int protocol_version;
    unsigned int field_count;
    unsigned int server_status;
    unsigned int server_language;
    struct st_mysql_options options;
    enum mysql_status status;
    my_bool     free_me;                /* If free in mysql_close */
    my_bool     unused_1;
    char                scramble_buff[20+ 1];
    /* madded after 3.23.58 */
    my_bool       unused_2;
    void          *unused_3, *unused_4, *unused_5, *unused_6;
    LIST          *stmts;
    const struct  st_mariadb_methods *methods;
    void          *thd;
    my_bool       *unbuffered_fetch_owner;
    char          *info_buffer;
    struct st_mariadb_extension *extension;
} MYSQL;

typedef struct st_mysql_res {
  unsigned long long  row_count;
  unsigned int  field_count, current_field;
  MYSQL_FIELD   *fields;
  MYSQL_DATA    *data;
  MYSQL_ROWS    *data_cursor;
  MA_MEM_ROOT   field_alloc;
  MYSQL_ROW     row;                    /* If unbuffered read */
  MYSQL_ROW     current_row;            /* buffer to current row */
  unsigned long *lengths;               /* column lengths of current row */
  MYSQL         *handle;                /* for unbuffered reads */
  my_bool       eof;                    /* Used my mysql_fetch_row */
  my_bool       is_ps;
} MYSQL_RES;

typedef struct
{
  unsigned long *p_max_allowed_packet;
  unsigned long *p_net_buffer_length;
  void *extension;
} MYSQL_PARAMETERS;


enum mariadb_field_attr_t
{
  MARIADB_FIELD_ATTR_DATA_TYPE_NAME= 0,
  MARIADB_FIELD_ATTR_FORMAT_NAME= 1
};

#define MARIADB_FIELD_ATTR_LAST MARIADB_FIELD_ATTR_FORMAT_NAME


int STDCALL mariadb_field_attr(MARIADB_CONST_STRING *attr,
                               const MYSQL_FIELD *field,
                               enum mariadb_field_attr_t type);

#ifndef _mysql_time_h_
enum enum_mysql_timestamp_type
{
  MYSQL_TIMESTAMP_NONE= -2, MYSQL_TIMESTAMP_ERROR= -1,
  MYSQL_TIMESTAMP_DATE= 0, MYSQL_TIMESTAMP_DATETIME= 1, MYSQL_TIMESTAMP_TIME= 2
};

typedef struct st_mysql_time
{
  unsigned int  year, month, day, hour, minute, second;
  unsigned long second_part;
  my_bool       neg;
  enum enum_mysql_timestamp_type time_type;
} MYSQL_TIME;
#define AUTO_SEC_PART_DIGITS 39
#endif
