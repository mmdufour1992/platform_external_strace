/* Generated by ./xlat/gen.sh from ./xlat/if_dqinfo_valid.in; do not edit. */

static const struct xlat if_dqinfo_valid[] = {
#if defined(IIF_BGRACE) || (defined(HAVE_DECL_IIF_BGRACE) && HAVE_DECL_IIF_BGRACE)
 XLAT(IIF_BGRACE),
#endif
#if defined(IIF_IGRACE) || (defined(HAVE_DECL_IIF_IGRACE) && HAVE_DECL_IIF_IGRACE)
 XLAT(IIF_IGRACE),
#endif
#if defined(IIF_FLAGS) || (defined(HAVE_DECL_IIF_FLAGS) && HAVE_DECL_IIF_FLAGS)
 XLAT(IIF_FLAGS),
#endif
 XLAT_END
};