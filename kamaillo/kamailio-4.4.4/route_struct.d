route_struct.o: $(wildcard  route_struct.c route_struct.h select.h str.h \
  parser/msg_parser.h parser/../comp_defs.h parser/../lump_struct.h \
  parser/hf.h parser/../flags.h parser/../ip_addr.h compiler_opt.h ut.h \
  config.h types.h dprint.h cfg_core.h cfg/cfg.h mem/mem.h mem/pkg.h \
  mem/memapi.h mem/src_loc.h mem/meminfo.h mem/memdbg.h mem/shm_mem.h \
  mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h \
  parser/../md5utils.h parser/parse_def.h parser/parse_cseq.h \
  parser/parse_via.h parser/parse_fline.h parser/parse_retry_after.h \
  parser/../error.h usr_avp.h)
