#ifndef _META_H
#define _META_H

#include "../vgmstream.h"

VGMSTREAM * init_vgmstream_adx(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_afc(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_agsc(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ast(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_brstm(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_Cstr(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_gcsw(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_halpst(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_nds_strm(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ngc_adpdtk(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ngc_dsp_std(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ngc_dsp_stm(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ngc_mpdsp(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ngc_dsp_std_int(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_ads(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_npsf(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_rs03(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_rsf(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_rwsd(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_cdxa(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_rxw(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_int(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_exst(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_svag(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_mib(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_mic(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_raw(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_vag(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_psx_gms(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_str(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_ild(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_pnb(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_xbox_wavm(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_xbox_xwav(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ngc_str(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ea(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_caf(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_vpk(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_genh(STREAMFILE *streamFile);

#ifdef VGM_USE_VORBIS
VGMSTREAM * init_vgmstream_ogg_vorbis(STREAMFILE *streamFile);
#endif

VGMSTREAM * init_vgmstream_sadb(STREAMFILE *streamFile);

VGMSTREAM * init_vgmstream_ps2_bmdx(STREAMFILE * streamFile);

VGMSTREAM * init_vgmstream_wsi(STREAMFILE * streamFile);

VGMSTREAM * init_vgmstream_aifc(STREAMFILE * streamFile);

VGMSTREAM * init_vgmstream_str_ctrl(STREAMFILE * streamFile);

#endif
