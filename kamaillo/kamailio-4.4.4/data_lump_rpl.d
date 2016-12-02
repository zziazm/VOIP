data_lump_rpl.o: $(wildcard  data_lump_rpl.c dprint.h compiler_opt.h cfg_core.h \
  cfg/cfg.h cfg/../str.h mem/mem.h mem/../config.h types.h mem/pkg.h \
  mem/memapi.h mem/src_loc.h mem/meminfo.h mem/memdbg.h data_lump_rpl.h \
  parser/msg_parser.h parser/../comp_defs.h parser/../lump_struct.h \
  parser/hf.h parser/../flags.h parser/../ip_addr.h ut.h mem/shm_mem.h \
  mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h \
  parser/../md5utils.h parser/parse_def.h parser/parse_cseq.h \
  parser/parse_via.h parser/parse_fline.h parser/parse_retry_after.h \
  parser/../error.h)
