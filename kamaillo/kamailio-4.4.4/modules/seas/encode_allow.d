encode_allow.o: $(wildcard  encode_allow.c ../../parser/parse_allow.h \
  ../../parser/hf.h ../../parser/../str.h ../../parser/../comp_defs.h \
  ../../parser/msg_parser.h ../../parser/../lump_struct.h \
  ../../parser/../flags.h ../../parser/../ip_addr.h \
  ../../parser/../compiler_opt.h ../../parser/../ut.h \
  ../../parser/../config.h ../../parser/../types.h \
  ../../parser/../dprint.h ../../parser/../cfg_core.h \
  ../../parser/../cfg/cfg.h ../../parser/../mem/mem.h \
  ../../parser/../mem/pkg.h ../../parser/../mem/memapi.h \
  ../../parser/../mem/src_loc.h ../../parser/../mem/meminfo.h \
  ../../parser/../mem/memdbg.h ../../parser/../mem/shm_mem.h \
  ../../parser/../mem/shm.h ../../parser/../mem/../lock_ops.h \
  ../../parser/../fastlock.h ../../parser/../sched_yield.h \
  ../../parser/../md5utils.h ../../parser/parse_def.h \
  ../../parser/parse_cseq.h ../../parser/parse_via.h \
  ../../parser/parse_fline.h ../../parser/parse_retry_after.h \
  ../../parser/../error.h encode_allow.h)