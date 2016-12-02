nonce.o: $(wildcard  nonce.c ../../compiler_opt.h ../../md5.h ../../dprint.h \
  ../../cfg_core.h ../../cfg/cfg.h ../../cfg/../str.h ../../ut.h \
  ../../comp_defs.h ../../config.h ../../types.h ../../mem/mem.h \
  ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../mem/../lock_ops.h ../../fastlock.h \
  ../../sched_yield.h ../../parser/msg_parser.h \
  ../../parser/../lump_struct.h ../.././parser/hf.h \
  ../../parser/../flags.h ../../parser/../ip_addr.h \
  ../../parser/../md5utils.h ../../parser/parse_def.h \
  ../../parser/parse_cseq.h ../../parser/parse_via.h \
  ../../parser/parse_fline.h ../../parser/parse_retry_after.h \
  ../../parser/../error.h ../../parser/parse_from.h \
  ../../parser/parse_to.h ../../parser/parse_addr_spec.h nonce.h \
  ../../parser/digest/digest.h ../../parser/digest/digest_parser.h \
  ../../basex.h ../../endianness.h ../../globals.h ../../poll_types.h \
  nc.h nid.h ../../atomic_ops.h ../../atomic/atomic_common.h \
  ../../atomic/atomic_native.h ../../atomic/atomic_x86.h ../../pt.h \
  ../../timer.h ../../clist.h ../../timer_ticks.h ../../socket_info.h \
  ../../locking.h ../../lock_alloc.h ot_nonce.h)
