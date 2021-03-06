install(PROGRAMS
  annot2std
  aparc2feat
  aparcstats2table
  aparcstatsdiff
  apas2aseg
  aseg2feat
  asegstats2table
  asegstatsdiff
  avi2talxfm
  bblabel
  bbmask
  bedpostx_mgh
  beta2sxa
  biasfield
  bmedits2surf
  browse-minc-header.tcl
  bugr
  build_desikan_killiany_gcs.csh
  cblumwmgyri
  check_recons.sh
  check_subject
  checkMCR.sh
  clear_fs_env.csh
  compute_interrater_variability.csh
  compute_label_vals.csh
  compute_label_volumes.csh
  conf2hires
  cor_to_minc
  cp-dicom
  datastruct_utils.py
  dcmdir-info-mgh
  dcmsplit
  dcmunpack
  deface_subject
  defect-seg
  dicom-rename
  dmrirc.example
  dmrirc.long.example
  dsh
  dt_recon
  easyfv
  epidewarp.fsl
  extract_talairach_avi_QA.awk
  feat2segstats
  feat2surf
  findsession
  fix_subject
  fix_subject-lh
  fix_subject-rh
  fix_subject_corrected
  fix_subject_corrected-lh
  fix_subject_corrected-rh
  fix_subject_on_seychelles
  fixup_mni_paths
  flirt.newdefault.20080811.sch
  fname2ext
  fname2stem
  freesurfer
  fs_lib_check
  fs_time
  fs_tutorial_data
  fs_update
  fscalc
  fscalc.fsl
  fsdcmdecompress
  fsfget
  fsgd_parser.py
  fsl.5.0.2.xyztrans.sch
  fsl_rigid_register
  fsl_sub_mgh
  fslregister
  fspalm
  fsr-checkxopts
  fsr-coreg  
  fsr-getxopts
  fsr-import
  fsutils.py
  fvcompare
  gca-apply
  gcainit
  gcaprepone
  gcatrain
  gcatrainskull
  get_label_thickness
  getfullpath
  grad_unwarp
  groupstats
  groupstatsdiff
  gtmseg
  help_xml_validate
  inflate_subject
  inflate_subject-lh
  inflate_subject-rh
  inflate_subject3
  inflate_subject_new
  inflate_subject_new-lh
  inflate_subject_new-rh
  inflate_subject_sc
  irepifitvol
  is-surface
  isanalyze
  IsLTA
  isnifti
  jkgcatrain
  label_child
  label_elderly_subject
  label_subject
  label_subject_flash
  label_subject_mixed
  labels_disjoint
  labels_intersect
  labels_union
  long_create_base_sigma
  long_create_orig
  long_mris_slopes
  long_qdec_table
  long_stats_combine
  long_stats_slopes
  long_stats_tps
  long_submit_jobs
  long_submit_postproc
  longmc
  LongQdecTable.py
  lpcregister
  make-segvol-table
  make_average_subcort
  make_average_subject
  make_average_surface
  make_average_volume
  make_cortex_label
  make_folding_atlas
  make_hemi_mask
  make_symmetric
  make_upright
  map_all_labels
  map_all_labels-lh
  map_central_sulcus
  map_to_base
  mcparams2reg
  meanval
  merge_stats_tables
  mergeseg
  minc2seqinfo
  misc.py
  mkheadsurf
  mkima_index.tcl
  mkmnc_index.tcl
  mksubjdirs
  mksurfatlas
  mni152reg
  morph_only_subject
  morph_only_subject-lh
  morph_only_subject-rh
  morph_rgb-lh
  morph_rgb-rh
  morph_subject
  morph_subject-lh
  morph_subject-rh
  morph_subject_on_seychelles
  morph_tables-lh
  morph_tables-rh
  mri-func2sph
  mri-funcvits
  mri-sph2surf
  mri_add_new_tp
  mri_align_long.csh
  mri_create_t2combined
  mri_glmfit-sim
  mri_mergelabels
  mri_motion_correct
  mri_motion_correct.fsl
  mri_motion_correct2
  mri_nu_correct.mni
  mri_reorient_LR.csh
  mris_preproc
  mris_roiCircle
  mris_volsmooth
  ms_refine_subject
  orientLAS
  parc_atlas_jackknife_test
  pctsurfcon
  plot_structure_stats.tcl
  polyorder
  print_unique_labels.csh
  progressbar.tcl
  rbbr
  rcbf-prep
  rebuild_gca_atlas.csh
  recon-all
  recon-all-exvivo
  recon-all.makefile
  reconbatchjobs
  reg-feat2anat
  reg-mni305.2mm
  reg2subject
  register.csh
  register_child
  register_elderly_subject
  register_subject
  register_subject_flash
  register_subject_mixed
  reinflate_subject
  reinflate_subject-lh
  reinflate_subject-rh
  remove_talairach
  renormalize_subject
  renormalize_subject_keep_editting
  renormalize_T1_subject
  reregister_subject_mixed
  rmcr
  rtview
  run-qdec-glm
  run_mris_preproc
  samseg2recon
  seg2filled
  segment_monkey
  segment_subject
  segment_subject_notal
  segment_subject_notal2
  segment_subject_old_skull_strip
  segment_subject_sc
  segment_subject_talmgh
  segpons
  setlabelstat
  sfa2fieldsign
  show_tal
  skip_long_make_checks
  slicedelay
  sphere_subject
  sphere_subject-lh
  sphere_subject-rh
  spm_t_to_b
  spmmat2register
  spmregister
  sratio
  stattablediff
  stem2fname
  subject_info.py
  surfreg
  tal_compare
  talairach
  talairach2
  talairach_mgh
  talsegprob
  test_recon-all.csh
  test_tutorials.sh
  thickdiffmap
  tkmeditfv
  tkregisterfv
  tksurferfv
  trac-all
  trac-paths
  trac-preproc
  tractstats2table
  unpack_ima.tcl
  unpack_ima1.tcl
  unpack_mnc.tcl
  unpackimadir
  unpackimadir2
  unpackmincdir
  unpacksdcmdir
  UpdateNeeded
  usbtree
  vertexvol
  vno_match_check
  vol2segavg
  vol2symsurf
  vsm-smooth
  wfilemask
  wm-anat-snr
  wmedits2surf
  wmsaseg
  xcerebralseg
  xcorr
  xfmrot
  xhemi-tal
  xhemireg
  xsanatreg
  DESTINATION bin
)

install_append_help(bbregister bbregister.help.xml bin)

install_symlinks(fs_spmreg.glnxa64 irepifitvol.glnx64 TYPE programs DESTINATION bin)

if(NOT MINIMAL)

  # these tcl scripts should be excluded from a minimal distribution
  install(PROGRAMS
    allisons_surfaces.tcl
    curv-flat.tcl
    curv-views.tcl
    dara_data.tcl
    dipmovie-flat.tcl
    eccen-flat.tcl
    eccen-views.tcl
    fs-flat.tcl
    fs-make.tcl
    fs-views.tcl
    mk-fieldsign.tcl
    offsetmovie.tcl
    phasemovie.tcl
    polar-flat.tcl
    polar-views.tcl
    readenv.tcl
    real-flat.tcl
    real-views.tcl
    saveflat.tcl
    saveviews.tcl
    setdefpatchview.tcl
    solmovie-flat.tcl
    twocond-flat.tcl
    twocond-masked-views.tcl
    twocond-views.tcl
    wrappers.tcl
    fsgdfPlot.tcl
    DESTINATION lib/tcl
  )

  install(PROGRAMS process_exvivo_diff_data_bay3.sh DESTINATION bin COMPONENT nmr EXCLUDE_FROM_ALL)

endif()
