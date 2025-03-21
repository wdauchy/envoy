#pragma once

/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package http */

// NOLINT(namespace-envoy)

#line 1 "cgo-builtin-export-prolog"

#include <stddef.h> // NOLINT(modernize-deprecated-headers)

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { // NOLINT(modernize-use-using)
  const char* p;
  ptrdiff_t n;
} _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments. */

#line 20 "export.go"

// ref https://github.com/golang/go/issues/25832

#include <stdlib.h> // NOLINT(modernize-deprecated-headers)
#include <string.h> // NOLINT(modernize-deprecated-headers)

#include "api.h"

#line 1 "cgo-generated-wrapper"

/* End of preamble from import "C" comments. */

/* Start of boilerplate cgo prologue. */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;          // NOLINT(modernize-use-using)
typedef unsigned char GoUint8;       // NOLINT(modernize-use-using)
typedef short GoInt16;               // NOLINT(modernize-use-using)
typedef unsigned short GoUint16;     // NOLINT(modernize-use-using)
typedef int GoInt32;                 // NOLINT(modernize-use-using)
typedef unsigned int GoUint32;       // NOLINT(modernize-use-using)
typedef long long GoInt64;           // NOLINT(modernize-use-using)
typedef unsigned long long GoUint64; // NOLINT(modernize-use-using)
typedef GoInt64 GoInt;               // NOLINT(modernize-use-using)
typedef GoUint64 GoUint;             // NOLINT(modernize-use-using)
typedef size_t GoUintptr;            // NOLINT(modernize-use-using)
typedef float GoFloat32;             // NOLINT(modernize-use-using)
typedef double GoFloat64;            // NOLINT(modernize-use-using)
#ifdef _MSC_VER
#include <complex.h>
typedef _Fcomplex GoComplex64;  // NOLINT(modernize-use-using)
typedef _Dcomplex GoComplex128; // NOLINT(modernize-use-using)
#else
typedef float _Complex GoComplex64;   // NOLINT(modernize-use-using)
typedef double _Complex GoComplex128; // NOLINT(modernize-use-using)
#endif

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char // NOLINT(modernize-use-using)
    _check_for_64_bit_pointer_matching_GoInt[sizeof(void*) == 64 / 8 ? 1 : -1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString; // NOLINT(modernize-use-using)
#endif
typedef void* GoMap;  // NOLINT(modernize-use-using)
typedef void* GoChan; // NOLINT(modernize-use-using)
typedef struct {      // NOLINT(modernize-use-using)
  void* t;
  void* v;
} GoInterface;
typedef struct { // NOLINT(modernize-use-using)
  void* data;
  GoInt len;
  GoInt cap;
} GoSlice;

#endif

/* End of boilerplate cgo prologue. */

#ifdef __cplusplus
extern "C" {
#endif

// go:linkname envoyGoFilterNewHttpPluginConfig
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoFilterNewHttpPluginConfig
extern GoUint64 envoyGoFilterNewHttpPluginConfig(httpConfig* p0);

// go:linkname envoyGoFilterDestroyHttpPluginConfig
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoFilterDestroyHttpPluginConfig
extern void envoyGoFilterDestroyHttpPluginConfig(GoUint64 id, GoInt need_delay);

// go:linkname envoyGoFilterMergeHttpPluginConfig
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoFilterMergeHttpPluginConfig
extern GoUint64 envoyGoFilterMergeHttpPluginConfig(GoUint64 name_ptr, GoUint64 name_len,
                                                   GoUint64 parent_id, GoUint64 child_id);

// go:linkname envoyGoFilterOnHttpHeader
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoFilterOnHttpHeader
extern GoUint64 envoyGoFilterOnHttpHeader(processState* r, GoUint64 end_stream, GoUint64 header_num,
                                          GoUint64 header_bytes);

// go:linkname envoyGoFilterOnHttpData
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoFilterOnHttpData
extern GoUint64 envoyGoFilterOnHttpData(processState* s, GoUint64 end_stream, GoUint64 buffer,
                                        GoUint64 length);

// go:linkname envoyGoFilterOnHttpLog
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoFilterOnHttpLog
extern void envoyGoFilterOnHttpLog(httpRequest* r, GoUint64 type, processState* decoding_state,
                                   processState* encoding_state, GoUint64 req_header_num,
                                   GoUint64 req_header_bytes, GoUint64 req_trailer_num,
                                   GoUint64 req_trailer_bytes, GoUint64 resp_header_num,
                                   GoUint64 resp_header_bytes, GoUint64 resp_trailer_num,
                                   GoUint64 resp_trailer_bytes);

// go:linkname envoyGoFilterOnHttpStreamComplete
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoFilterOnHttpStreamComplete
extern void envoyGoFilterOnHttpStreamComplete(httpRequest* r);

// go:linkname envoyGoFilterOnHttpDestroy
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoFilterOnHttpDestroy
extern void envoyGoFilterOnHttpDestroy(httpRequest* r, GoUint64 reason);

// go:linkname envoyGoRequestSemaDec
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoRequestSemaDec
extern void envoyGoRequestSemaDec(httpRequest* r);

// go:linkname envoyGoFilterCleanUp
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoFilterCleanUp
extern void envoyGoFilterCleanUp();

// go:linkname envoyGoOnClusterSpecify
// github.com/envoyproxy/envoy/contrib/golang/router/cluster_specifier/source/go/pkg/cluster_specifier.envoyGoOnClusterSpecify
extern GoInt64 envoyGoOnClusterSpecify(GoUint64 plugin_ptr, GoUint64 header_ptr, GoUint64 plugin_id,
                                       GoUint64 buffer_ptr, GoUint64 buffer_len);

// go:linkname envoyGoClusterSpecifierNewPlugin
// github.com/envoyproxy/envoy/contrib/golang/router/cluster_specifier/source/go/pkg/cluster_specifier.envoyGoClusterSpecifierNewPlugin
extern GoUint64 envoyGoClusterSpecifierNewPlugin(GoUint64 config_ptr, GoUint64 config_len);

// go:linkname envoyGoFilterOnNetworkFilterConfig
// github.com/envoyproxy/envoy/contrib/golang/filters/network/source/go/pkg/network.envoyGoFilterOnNetworkFilterConfig
extern GoUint64 envoyGoFilterOnNetworkFilterConfig(GoUint64 library_id_ptr, GoUint64 library_id_len,
                                                   GoUint64 config_ptr, GoUint64 config_len);

// go:linkname envoyGoFilterOnDownstreamConnection
// github.com/envoyproxy/envoy/contrib/golang/filters/network/source/go/pkg/network.envoyGoFilterOnDownstreamConnection
extern GoUint64 envoyGoFilterOnDownstreamConnection(void* f, GoUint64 plugin_name_ptr,
                                                    GoUint64 plugin_name_len, GoUint64 config_id);

// go:linkname envoyGoFilterOnDownstreamData
// github.com/envoyproxy/envoy/contrib/golang/filters/network/source/go/pkg/network.envoyGoFilterOnDownstreamData
extern GoUint64 envoyGoFilterOnDownstreamData(void* f, GoUint64 data_size, GoUint64 data_ptr,
                                              GoInt slice_num, GoInt end_of_stream);

// go:linkname envoyGoFilterOnDownstreamWrite
// github.com/envoyproxy/envoy/contrib/golang/filters/network/source/go/pkg/network.envoyGoFilterOnDownstreamWrite
extern GoUint64 envoyGoFilterOnDownstreamWrite(void* f, GoUint64 data_size, GoUint64 data_ptr,
                                               GoInt slice_num, GoInt end_of_stream);

// go:linkname envoyGoFilterOnDownstreamEvent
// github.com/envoyproxy/envoy/contrib/golang/filters/network/source/go/pkg/network.envoyGoFilterOnDownstreamEvent
extern void envoyGoFilterOnDownstreamEvent(void* f, GoInt event);

// go:linkname envoyGoFilterOnUpstreamConnectionReady
// github.com/envoyproxy/envoy/contrib/golang/filters/network/source/go/pkg/network.envoyGoFilterOnUpstreamConnectionReady
extern void envoyGoFilterOnUpstreamConnectionReady(void* f, GoUint64 conn_id);

// go:linkname envoyGoFilterOnUpstreamConnectionFailure
// github.com/envoyproxy/envoy/contrib/golang/filters/network/source/go/pkg/network.envoyGoFilterOnUpstreamConnectionFailure
extern void envoyGoFilterOnUpstreamConnectionFailure(void* f, GoInt reason, GoUint64 conn_id);

// go:linkname envoyGoFilterOnUpstreamData
// github.com/envoyproxy/envoy/contrib/golang/filters/network/source/go/pkg/network.envoyGoFilterOnUpstreamData
extern GoUint64 envoyGoFilterOnUpstreamData(void* f, GoUint64 data_size, GoUint64 data_ptr,
                                            GoInt slice_num, GoInt end_of_stream);

// go:linkname envoyGoFilterOnUpstreamEvent
// github.com/envoyproxy/envoy/contrib/golang/filters/network/source/go/pkg/network.envoyGoFilterOnUpstreamEvent
extern void envoyGoFilterOnUpstreamEvent(void* f, GoInt event);

// go:linkname envoyGoHttpTcpBridgeOnConfig
// github.com/envoyproxy/envoy/contrib/golang/filters/upstreams/http/tcp/source/go/pkg/upstreams/http/tcp.envoyGoHttpTcpBridgeOnConfig
extern GoUint64 envoyGoHttpTcpBridgeOnConfig(GoUint64 library_id_ptr, GoUint64 library_id_len,
                                             GoUint64 config_ptr, GoUint64 config_len);

// go:linkname envoyGoHttpTcpBridgeDestroyPluginConfig
// github.com/envoyproxy/envoy/contrib/golang/filters/http/source/go/pkg/http.envoyGoHttpTcpBridgeDestroyPluginConfig
extern void envoyGoHttpTcpBridgeDestroyPluginConfig(GoUint64 id);

// go:linkname envoyGoHttpTcpBridgeOnEncodeHeader
// github.com/envoyproxy/envoy/contrib/golang/filters/upstreams/http/tcp/source/go/pkg/upstreams/http/tcp.envoyGoHttpTcpBridgeOnEncodeHeader
extern GoUint64 envoyGoHttpTcpBridgeOnEncodeHeader(processState* r, GoUint64 end_stream,
                                                   GoUint64 header_num, GoUint64 header_bytes,
                                                   GoUint64 buf_ptr, GoUint64 buf_len);

// go:linkname envoyGoHttpTcpBridgeOnEncodeData
// github.com/envoyproxy/envoy/contrib/golang/filters/upstreams/http/tcp/source/go/pkg/upstreams/http/tcp.envoyGoHttpTcpBridgeOnEncodeData
extern GoUint64 envoyGoHttpTcpBridgeOnEncodeData(processState* state, GoUint64 end_stream,
                                                 GoUint64 buf_ptr, GoUint64 buf_len);

// go:linkname envoyGoHttpTcpBridgeOnUpstreamData
// github.com/envoyproxy/envoy/contrib/golang/filters/upstreams/http/tcp/source/go/pkg/upstreams/http/tcp.envoyGoHttpTcpBridgeOnUpstreamData
extern GoUint64 envoyGoHttpTcpBridgeOnUpstreamData(processState* state, GoUint64 end_stream,
                                                   GoUint64 header_num, GoUint64 header_bytes,
                                                   GoUint64 buf_ptr, GoUint64 buf_len);

// go:linkname envoyGoHttpTcpBridgeOnDestroy
// github.com/envoyproxy/envoy/contrib/golang/filters/upstreams/http/tcp/source/go/pkg/upstreams/http/tcp.envoyGoHttpTcpBridgeOnDestroy
extern void envoyGoHttpTcpBridgeOnDestroy(httpRequest* r);

#ifdef __cplusplus
}
#endif
