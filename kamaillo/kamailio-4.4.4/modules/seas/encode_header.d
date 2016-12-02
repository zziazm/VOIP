encode_header.o: $(wildcard  encode_header.c ../../str.h ../../parser/msg_parser.h \
  ../../parser/../comp_defs.h ../../parser/../lump_struct.h \
  ../.././parser/hf.h ../../parser/../flags.h ../../parser/../ip_addr.h \
  ../../compiler_opt.h ../../ut.h ../../config.h ../../types.h \
  ../../dprint.h ../../cfg_core.h ../../cfg/cfg.h ../../mem/mem.h \
  ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../mem/../lock_ops.h ../../fastlock.h \
  ../../sched_yield.h ../../parser/../md5utils.h \
  ../../parser/parse_def.h ../../parser/parse_cseq.h \
  ../../parser/parse_via.h ../../parser/parse_fline.h \
  ../../parser/parse_retry_after.h ../../parser/../error.h \
  ../../parser/contact/parse_contact.h ../../parser/contact/contact.h \
  ../../parser/contact/../parse_param.h ../../parser/digest/digest.h \
  ../../parser/digest/digest_parser.h ../../parser/parse_rr.h \
  ../../parser/parse_nameaddr.h ../../parser/parse_content.h \
  ../../parser/parse_expires.h ../../parser/parse_methods.h \
  encode_to_body.h ../../parser/parse_to.h \
  ../../parser/parse_addr_spec.h encode_contact.h encode_digest.h \
  encode_via.h encode_cseq.h encode_route.h encode_content_length.h \
  encode_content_type.h encode_expires.h encode_allow.h xaddress.h \
  encode_msg.h encode_header.h)
