parser/parse_event.o: $(wildcard  parser/parse_event.c parser/parse_event.h parser/../str.h \
  parser/hf.h parser/../comp_defs.h parser/parse_param.h \
  parser/../mem/mem.h parser/../mem/../config.h parser/../types.h \
  parser/../mem/../dprint.h parser/../compiler_opt.h \
  parser/../cfg_core.h parser/../cfg/cfg.h parser/../mem/pkg.h \
  parser/../mem/memapi.h parser/../mem/src_loc.h parser/../mem/meminfo.h \
  parser/../mem/memdbg.h parser/../trim.h parser/../ut.h \
  parser/../mem/shm_mem.h parser/../mem/shm.h \
  parser/../mem/../lock_ops.h parser/../fastlock.h \
  parser/../sched_yield.h)
