// -*- C++ -*-
//
// $Id$

#ifndef TAO_SERVER_INTERCEPTOR_H
#define TAO_SERVER_INTERCEPTOR_H

#include "testC.h"

#include "tao/PI_Server/PI_Server.h"
#include "tao/PortableInterceptorC.h"
#include "tao/LocalObject.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

class Vault_Server_Request_Interceptor
  : public virtual PortableInterceptor::ServerRequestInterceptor,
    public virtual TAO_Local_RefCounted_Object
{
  // = Server-side Vault interceptor.  For checking interceptor visually only.
public:
  Vault_Server_Request_Interceptor (void);
  // cotr.
  ~Vault_Server_Request_Interceptor ();
  // dotr.

  virtual char * name (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));
  // Canonical name of the interceptor.

  virtual void destroy (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void receive_request (PortableInterceptor::ServerRequestInfo_ptr ri
                                ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException,
                     PortableInterceptor::ForwardRequest));

  virtual void receive_request_service_contexts (
        PortableInterceptor::ServerRequestInfo_ptr
        ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       PortableInterceptor::ForwardRequest));

  virtual void send_reply (PortableInterceptor::ServerRequestInfo_ptr ri
                           ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void send_exception (PortableInterceptor::ServerRequestInfo_ptr ri
                               ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException,
                     PortableInterceptor::ForwardRequest));

  virtual void send_other (PortableInterceptor::ServerRequestInfo_ptr
                           ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       PortableInterceptor::ForwardRequest));

private:
  const char *myname_;
};

class Vault_Server_Request_Context_Interceptor
  : public virtual PortableInterceptor::ServerRequestInterceptor,
    public virtual TAO_Local_RefCounted_Object
{
  // = Server-side Vault interceptor.  For checking interceptor visually only.
public:
  Vault_Server_Request_Context_Interceptor (void);
  // cotr.
  ~Vault_Server_Request_Context_Interceptor ();
  // dotr.

  virtual char * name (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));
  // Canonical name of the interceptor.

  virtual void destroy (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void receive_request (PortableInterceptor::ServerRequestInfo_ptr ri
                                ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException,
                     PortableInterceptor::ForwardRequest));

  virtual void receive_request_service_contexts (
        PortableInterceptor::ServerRequestInfo_ptr
        ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       PortableInterceptor::ForwardRequest));

  virtual void send_reply (PortableInterceptor::ServerRequestInfo_ptr ri
                           ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void send_exception (PortableInterceptor::ServerRequestInfo_ptr ri
                               ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException,
                     PortableInterceptor::ForwardRequest));

  virtual void send_other (PortableInterceptor::ServerRequestInfo_ptr
                           ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       PortableInterceptor::ForwardRequest));

private:
  const char *myname_;
};

class Vault_Server_Request_Dynamic_Interceptor
  : public virtual PortableInterceptor::ServerRequestInterceptor,
    public virtual TAO_Local_RefCounted_Object
{
  // = Server-side Vault interceptor.  For checking interceptor visually only.
public:
  Vault_Server_Request_Dynamic_Interceptor (void);
  // cotr.
  ~Vault_Server_Request_Dynamic_Interceptor ();
  // dotr.

  virtual char * name (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));
  // Canonical name of the interceptor.

  virtual void destroy (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void receive_request (PortableInterceptor::ServerRequestInfo_ptr ri
                                ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException,
                     PortableInterceptor::ForwardRequest));

  virtual void receive_request_service_contexts (
        PortableInterceptor::ServerRequestInfo_ptr
        ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       PortableInterceptor::ForwardRequest));

  virtual void send_reply (PortableInterceptor::ServerRequestInfo_ptr ri
                           ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void send_exception (PortableInterceptor::ServerRequestInfo_ptr ri
                               ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException,
                     PortableInterceptor::ForwardRequest));

  virtual void send_other (PortableInterceptor::ServerRequestInfo_ptr
                           ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       PortableInterceptor::ForwardRequest));

private:
  const char *myname_;
};

class Vault_Server_Request_NOOP_Interceptor
  : public virtual PortableInterceptor::ServerRequestInterceptor,
    public virtual TAO_Local_RefCounted_Object
{
  // = Server-side Vault interceptor.  For checking interceptor visually only.
public:
  Vault_Server_Request_NOOP_Interceptor (void);
  // cotr.
  ~Vault_Server_Request_NOOP_Interceptor ();
  // dotr.

  virtual char * name (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));
  // Canonical name of the interceptor.

  virtual void destroy (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void receive_request (PortableInterceptor::ServerRequestInfo_ptr ri
                                ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException,
                     PortableInterceptor::ForwardRequest));

  virtual void receive_request_service_contexts (
        PortableInterceptor::ServerRequestInfo_ptr
        ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       PortableInterceptor::ForwardRequest));

  virtual void send_reply (PortableInterceptor::ServerRequestInfo_ptr ri
                                ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void send_exception (PortableInterceptor::ServerRequestInfo_ptr ri
                               ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException,
                     PortableInterceptor::ForwardRequest));

  virtual void send_other (PortableInterceptor::ServerRequestInfo_ptr
                           ACE_ENV_ARG_DECL_WITH_DEFAULTS)
      ACE_THROW_SPEC ((CORBA::SystemException,
                       PortableInterceptor::ForwardRequest));

private:
  const char *myname_;
};

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#endif /* TAO_SERVER_INTERCEPTOR_H */
