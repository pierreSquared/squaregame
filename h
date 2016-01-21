Usage: vlc [options] [stream] ...
You can specify multiple streams on the commandline.
They will be enqueued in the playlist.
The first item specified will be played first.

Options-styles:
  --option  A global option that is set for the duration of the program.
   -option  A single letter version of a global --option.
   :option  An option that only applies to the stream directly before it
            and that overrides previous settings.

Stream MRL syntax:
  [[access][/demux]://]URL[#[title][:chapter][-[title][:chapter]]]
  [:option=value ...]

  Many of the global --options can also be used as MRL specific :options.
  Multiple :option=value pairs can be specified.

URL syntax:
  file:///path/file              Plain media file
  http://host[:port]/file        HTTP URL
  ftp://host[:port]/file         FTP URL
  mms://host[:port]/file         MMS URL
  screen://                      Screen capture
  dvd://[device]                 DVD device
  vcd://[device]                 VCD device
  cdda://[device]                Audio CD device
  udp://[[<source address>]@[<bind address>][:<bind port>]]
                                 UDP stream sent by a streaming server
  vlc://pause:<seconds>          Pause the playlist for a certain time
  vlc://quit                     Special item to quit VLC


 Lua interpreter (lua)
      --lua-intf <string>        Lua interface
          Lua interface module to load
      --lua-config <string>      Lua interface configuration
          Lua interface configuration string. Format is: '["<interface module
          name>"] = { <option> = <value>, ...}, ...'.
   Lua HTTP:
      --http-password <string>   Password
          A single password restricts access to this interface.
      --http-src <string>        Source directory
          Source directory
      --http-index, --no-http-index 
                                 Directory index (default disabled)
          Allow to build directory index (default disabled)
   Lua CLI:
      --rc-host <string>         TCP command input
          Accept commands over a socket rather than stdin. You can set the
          address and port the interface will bind to.
      --cli-host <string>        CLI input
          Accept commands from this source. The CLI defaults to stdin
          ("*console"), but can also bind to a plain TCP socket
          ("localhost:4212") or use the telnet protocol
          ("telnet://0.0.0.0:4212")
   Lua Telnet:
      --telnet-host <string>     Host
          This is the host on which the interface will listen. It defaults to
          all network interfaces (0.0.0.0). If you want this interface to be
          available only on the local machine, enter "127.0.0.1".
      --telnet-port <integer [1 .. 65535]> 
                                 Port
          This is the TCP port on which this interface will listen. It defaults
          to 4212.
      --telnet-password <string> Password
          A single password restricts access to this interface.
      --lua-sd <string>          
      --lua-longname <string>    

 LibNotify Notification Plugin (notify)
      --notify-timeout <integer [-2147483648 .. 2147483647]> 
                                 Timeout (ms)
          How long the notification will be displayed 

 X11 video window (XCB) (xcb_window)
      --x11-display <string>     X11 display
          Video will be rendered with this X11 display. If empty, the default
          display will be used.
      --drawable-xid <integer [-2147483648 .. 2147483647]> 
                                 X11 window ID
          Video will be embedded in this pre-existing window. If zero, a new
          window will be created.

 OpenGL for Embedded Systems video output (gles1)
      --gles <string>            OpenGL ES extension
          Extension through which to use the Open Graphics Library (OpenGL).

 OpenGL for Embedded Systems 2 video output (gles2)
      --gles2 <string>           OpenGL ES 2 extension
          Extension through which to use the Open Graphics Library (OpenGL).

 GNU/Linux framebuffer video output (fb)
      --fbdev <string>           Framebuffer device
          Framebuffer device to use for rendering (usually /dev/fb0).
      --fb-tty, --no-fb-tty      Run fb on current tty (default enabled)
          Run framebuffer on current TTY device (default enabled). (disable tty
          handling with caution) (default enabled)
      --fb-chroma <string>       Image format (default RGB)
          Chroma fourcc used by the framebuffer. Default is RGB since the fb
          device has no way to report its chroma.
      --fb-mode <integer [-2147483648 .. 2147483647]> 
                                 Framebuffer resolution to use
          Select the resolution for the framebuffer. Currently it supports the
          values 0=QCIF 1=CIF 2=NTSC 3=PAL, 4=auto (default 4=auto)
      --fb-hw-accel, --no-fb-hw-accel 
                                 Framebuffer uses hw acceleration (default
                                 enabled)
          If your framebuffer supports hardware acceleration or does double
          buffering in hardware then you must disable this option. It then does
          double buffering in software. (default enabled)

 Video memory output (vmem)
      --vmem-width <integer [-2147483648 .. 2147483647]> 
                                 Width
          Video memory buffer width.
      --vmem-height <integer [-2147483648 .. 2147483647]> 
                                 Height
          Video memory buffer height.
      --vmem-pitch <integer [-2147483648 .. 2147483647]> 
                                 Pitch
          Video memory buffer pitch in bytes.
      --vmem-chroma <string>     Chroma
          Output chroma for the memory image as a 4-character string, eg.
          "RV32".

 OpenGL video output (experimental) (gl)
      --gl <string>              OpenGL extension
          Extension through which to use the Open Graphics Library (OpenGL).

 Dummy video output (vdummy)
      --dummy-chroma <string>    Dummy image chroma format
          Force the dummy video output to create images using a specific chroma
          format instead of trying to improve performances by using the most
          efficient one.

 XVideo output (XCB) (xcb_xv)
      --xvideo-adaptor <integer [-2147483648 .. 2147483647]> 
                                 XVideo adaptor number
          XVideo hardware adaptor to use. By default, VLC will use the first
          functional adaptor.
      --xvideo-format-id <integer [-2147483648 .. 2147483647]> 
                                 XVideo format id
          XVideo image format id to use. By default, VLC will try to use the
          best match for the video being played.

 YUV video output (yuv)
      --yuv-file <string>        device, fifo or filename
          device, fifo or filename to write yuv frames too.
      --yuv-chroma <string>      Chroma used
          Force use of a specific chroma for output. Default is I420.
      --yuv-yuv4mpeg2, --no-yuv-yuv4mpeg2 
                                 YUV4MPEG2 header (default disabled) (default
                                 disabled)
          The YUV4MPEG2 header is compatible with mplayer yuv video output and
          requires YV12/I420 fourcc. By default vlc writes the fourcc of the
          picture frame into the output destination. (default disabled)

 Dynamic Adaptive Streaming over HTTP (dash)
      --dash-prefwidth <integer [-2147483648 .. 2147483647]> 
                                 Preferred Width
          Preferred Width
      --dash-prefheight <integer [-2147483648 .. 2147483647]> 
                                 Preferred Height
          Preferred Height
      --dash-buffersize <integer [-2147483648 .. 2147483647]> 
                                 Buffer Size (Seconds)
          Buffer size in seconds

 H.264/MPEG-4 Part 10/AVC encoder (x264) (x264)
      --sout-x264-keyint <integer [-2147483648 .. 2147483647]> 
                                 Maximum GOP size
          Sets maximum interval between IDR-frames.Larger values save bits,
          thus improving quality for a given bitrate at the cost of seeking
          precision. Use -1 for infinite.
      --sout-x264-min-keyint <integer [-2147483648 .. 2147483647]> 
                                 Minimum GOP size
          Sets minimum interval between IDR-frames. In H.264, I-frames do not
          necessarily bound a closed GOP because it is allowable for a P-frame
          to be predicted from more frames than just the one frame before it
          (also see reference frame option). Therefore, I-frames are not
          necessarily seekable. IDR-frames restrict subsequent P-frames from
          referring to any frame prior to the IDR-frame.  If scenecuts appear
          within this interval, they are still encoded as I-frames, but do not
          start a new GOP.
      --sout-x264-opengop, --no-sout-x264-opengop 
                                 Use recovery points to close GOPs (default
                                 disabled)
          use open GOP, for bluray compatibility use also bluray-compat option
          (default disabled)
      --sout-x264-bluray-compat, --no-sout-x264-bluray-compat 
                                 Enable compatibility hacks for Blu-ray support
                                 (default disabled)
          Enable hacks for Blu-ray support, this doesn't enforce every aspect
          of Blu-ray compatibility e.g. resolution, framerate, level (default
          disabled)
      --sout-x264-scenecut <integer [-1 .. 100]> 
                                 Extra I-frames aggressivity
          Scene-cut detection. Controls how aggressively to insert extra
          I-frames. With small values of scenecut, the codec often has to force
          an I-frame when it would exceed keyint. Good values of scenecut may
          find a better location for the I-frame. Large values use more
          I-frames than necessary, thus wasting bits. -1 disables scene-cut
          detection, so I-frames are inserted only every other keyint frames,
          which probably leads to ugly encoding artifacts. Range 1 to 100.
      --sout-x264-bframes <integer [0 .. 16]> 
                                 B-frames between I and P
          Number of consecutive B-frames between I and P-frames. Range 1 to 16.
      --sout-x264-b-adapt <integer [0 .. 2]> 
                                 Adaptive B-frame decision
          Force the specified number of consecutive B-frames to be used, except
          possibly before an I-frame.Range 0 to 2.
      --sout-x264-b-bias <integer [-100 .. 100]> 
                                 Influence (bias) B-frames usage
          Bias the choice to use B-frames. Positive values cause more B-frames,
          negative values cause less B-frames.
      --sout-x264-bpyramid {none,strict,normal} 
                                 Keep some B-frames as references
          Allows B-frames to be used as references for predicting other frames.
          Keeps the middle of 2+ consecutive B-frames as a reference, and
          reorders frame appropriately.  - none: Disabled  - strict: Strictly
          hierarchical pyramid  - normal: Non-strict (not Blu-ray compatible) 
      --sout-x264-cabac, --no-sout-x264-cabac 
                                 CABAC (default enabled)
          CABAC (Context-Adaptive Binary Arithmetic Coding). Slightly slows
          down encoding and decoding, but should save 10 to 15% bitrate.
          (default enabled)
      --sout-x264-fullrange, --no-sout-x264-fullrange 
                                 Use fullrange instead of TV colourrange
                                 (default disabled)
          TV-range is usually used colourrange, defining this to true will
          enable libx264 to use full colourrange on encoding (default disabled)
      --sout-x264-ref <integer [1 .. 16]> 
                                 Number of reference frames
          Number of previous frames used as predictors. This is effective in
          Anime, but seems to make little difference in live-action source
          material. Some decoders are unable to deal with large frameref
          values. Range 1 to 16.
      --sout-x264-nf, --no-sout-x264-nf 
                                 Skip loop filter (default disabled)
          Deactivate the deblocking loop filter (decreases quality). (default
          disabled)
      --sout-x264-deblock <string> 
                                 Loop filter AlphaC0 and Beta parameters
                                 alpha:beta
          Loop filter AlphaC0 and Beta parameters. Range -6 to 6 for both alpha
          and beta parameters. -6 means light filter, 6 means strong.
      --sout-x264-psy-rd <string> 
                                 Strength of psychovisual optimization, default
                                 is "1.0:0.0"
          First parameter controls if RD is on (subme>=6) or off. Second
          parameter controls if Trellis is used on psychovisual optimization,
          default off
      --sout-x264-psy, --no-sout-x264-psy 
                                 Use Psy-optimizations (default enabled)
          Use all visual optimizations that can worsen both PSNR and SSIM
          (default enabled)
      --sout-x264-level <string> H.264 level
          Specify H.264 level (as defined by Annex A of the standard). Levels
          are not enforced; it's up to the user to select a level compatible
          with the rest of the encoding options. Range 1 to 5.1 (10 to 51 is
          also allowed). Set to 0 for letting x264 set level.
      --sout-x264-profile {baseline,main,high,high10,high422,high444} 
                                 H.264 profile
          Specify H.264 profile which limits are enforced over other settings
      --sout-x264-interlaced, --no-sout-x264-interlaced 
                                 Interlaced mode (default disabled)
          Pure-interlaced mode. (default disabled)
      --sout-x264-frame-packing {-1 (), 0 (checkerboard), 1 (column alternation), 2 (row alternation), 3 (side by side), 4 (top bottom), 5 (frame alternation)} 
                                 Frame packing
          For stereoscopic videos define frame arrangement:  0: checkerboard -
          pixels are alternatively from L and R  1: column alternation - L and
          R are interlaced by column  2: row alternation - L and R are
          interlaced by row  3: side by side - L is on the left, R on the right
           4: top bottom - L is on top, R on bottom  5: frame alternation - one
          view per frame
      --sout-x264-slices <integer [-2147483648 .. 2147483647]> 
                                 Force number of slices per frame
          Force rectangular slices and is overridden by other slicing options
      --sout-x264-slice-max-size <integer [-2147483648 .. 2147483647]> 
                                 Limit the size of each slice in bytes
          Sets a maximum slice size in bytes, Includes NAL overhead in size
      --sout-x264-slice-max-mbs <integer [-2147483648 .. 2147483647]> 
                                 Limit the size of each slice in macroblocks
          Sets a maximum number of macroblocks per slice
      --sout-x264-hrd {none,vbr,cbr} 
                                 HRD-timing information
          HRD-timing information
      --sout-x264-qp <integer [-1 .. 51]> 
                                 Set QP
          This selects the quantiser to use. Lower values result in better
          fidelity, but higher bitrates. 26 is a good default value. Range 0
          (lossless) to 51.
      --sout-x264-crf <integer [0 .. 51]> 
                                 Quality-based VBR
          1-pass Quality-based VBR. Range 0 to 51.
      --sout-x264-qpmin <integer [0 .. 51]> 
                                 Min QP
          Minimum quantiser parameter. 15 to 35 seems to be a useful range.
      --sout-x264-qpmax <integer [0 .. 51]> 
                                 Max QP
          Maximum quantiser parameter.
      --sout-x264-qpstep <integer [0 .. 51]> 
                                 Max QP step
          Max QP step between frames.
      --sout-x264-ratetol <float [0.000000 .. 100.000000]> 
                                 Average bitrate tolerance
          Allowed variance in average bitrate (in kbits/s).
      --sout-x264-vbv-maxrate <integer [-2147483648 .. 2147483647]> 
                                 Max local bitrate
          Sets a maximum local bitrate (in kbits/s).
      --sout-x264-vbv-bufsize <integer [-2147483648 .. 2147483647]> 
                                 VBV buffer
          Averaging period for the maximum local bitrate (in kbits).
      --sout-x264-vbv-init <float [0.000000 .. 1.000000]> 
                                 Initial VBV buffer occupancy
          Sets the initial buffer occupancy as a fraction of the buffer size.
          Range 0.0 to 1.0.
      --sout-x264-ipratio <float [1.000000 .. 2.000000]> 
                                 QP factor between I and P
          QP factor between I and P. Range 1.0 to 2.0.
      --sout-x264-pbratio <float [1.000000 .. 2.000000]> 
                                 QP factor between P and B
          QP factor between P and B. Range 1.0 to 2.0.
      --sout-x264-chroma-qp-offset <integer [-2147483648 .. 2147483647]> 
                                 QP difference between chroma and luma
          QP difference between chroma and luma.
      --sout-x264-pass <integer [0 .. 3]> 
                                 Multipass ratecontrol
          Multipass ratecontrol:  - 1: First pass, creates stats file  - 2:
          Last pass, does not overwrite stats file  - 3: Nth pass, overwrites
          stats file 
      --sout-x264-qcomp <float [0.000000 .. 1.000000]> 
                                 QP curve compression
          QP curve compression. Range 0.0 (CBR) to 1.0 (QCP).
      --sout-x264-cplxblur <float> 
                                 Reduce fluctuations in QP
          This reduces the fluctuations in QP before curve compression.
          Temporally blurs complexity.
      --sout-x264-qblur <float>  Reduce fluctuations in QP
          This reduces the fluctuations in QP after curve compression.
          Temporally blurs quants.
      --sout-x264-aq-mode <integer [0 .. 2]> 
                                 How AQ distributes bits
          Defines bitdistribution mode for AQ, default 1  - 0: Disabled  - 1:
          Current x264 default mode  - 2: uses log(var)^2 instead of log(var)
          and attempts to adapt strength per frame
      --sout-x264-aq-strength <float> 
                                 Strength of AQ
          Strength to reduce blocking and blurring in flat and textured areas,
          default 1.0 recommended to be between 0..2  - 0.5: weak AQ  - 1.5:
          strong AQ
      --sout-x264-partitions {none,fast,normal,slow,all} 
                                 Partitions to consider
          Partitions to consider in analyse mode:   - none  :   - fast  : i4x4 
          - normal: i4x4,p8x8,(i8x8)  - slow  : i4x4,p8x8,(i8x8),b8x8  - all  
          : i4x4,p8x8,(i8x8),b8x8,p4x4 (p4x4 requires p8x8. i8x8 requires
          8x8dct).
      --sout-x264-direct {none,spatial,temporal,auto} 
                                 Direct MV prediction mode
          Direct MV prediction mode
      --sout-x264-direct-8x8 <integer [-1 .. 1]> 
                                 Direct prediction size
          Direct prediction size:  -  0: 4x4  -  1: 8x8  - -1: smallest
          possible according to level 
      --sout-x264-weightb, --no-sout-x264-weightb 
                                 Weighted prediction for B-frames (default
                                 enabled)
          Weighted prediction for B-frames. (default enabled)
      --sout-x264-weightp <integer [0 .. 2]> 
                                 Weighted prediction for P-frames
           Weighted prediction for P-frames:  - 0: Disabled  - 1: Blind offset 
          - 2: Smart analysis 
      --sout-x264-me {dia,hex,umh,esa,tesa} 
                                 Integer pixel motion estimation method
          Selects the motion estimation algorithm:  - dia: diamond search,
          radius 1 (fast)  - hex: hexagonal search, radius 2  - umh: uneven
          multi-hexagon search (better but slower)  - esa: exhaustive search
          (extremely slow, primarily for testing)  - tesa: hadamard exhaustive
          search (extremely slow, primarily for testing) 
      --sout-x264-merange <integer [1 .. 64]> 
                                 Maximum motion vector search range
          Maximum distance to search for motion estimation, measured from
          predicted position(s). Default of 16 is good for most footage, high
          motion sequences may benefit from settings between 24 and 32. Range 0
          to 64.
      --sout-x264-mvrange <integer [-2147483648 .. 2147483647]> 
                                 Maximum motion vector length
          Maximum motion vector length in pixels. -1 is automatic, based on
          level.
      --sout-x264-mvrange-thread <integer [-2147483648 .. 2147483647]> 
                                 Minimum buffer space between threads
          Minimum buffer space between threads. -1 is automatic, based on
          number of threads.
      --sout-x264-subme <integer [-2147483648 .. 2147483647]> 
                                 Subpixel motion estimation and partition
                                 decision quality
          This parameter controls quality versus speed tradeoffs involved in
          the motion estimation decision process (lower = quicker and higher =
          better quality). Range 1 to 9.
      --sout-x264-mixed-refs, --no-sout-x264-mixed-refs 
                                 Decide references on a per partition basis
                                 (default enabled)
          Allows each 8x8 or 16x8 partition to independently select a reference
          frame, as opposed to only one ref per macroblock. (default enabled)
      --sout-x264-chroma-me, --no-sout-x264-chroma-me 
                                 Chroma in motion estimation (default enabled)
          Chroma ME for subpel and mode decision in P-frames. (default enabled)
      --sout-x264-8x8dct, --no-sout-x264-8x8dct 
                                 Adaptive spatial transform size (default
                                 enabled)
          SATD-based decision for 8x8 transform in inter-MBs. (default enabled)
      --sout-x264-trellis <integer [0 .. 2]> 
                                 Trellis RD quantization
          Trellis RD quantization:   - 0: disabled  - 1: enabled only on the
          final encode of a MB  - 2: enabled on all mode decisions This
          requires CABAC.
      --sout-x264-lookahead <integer [0 .. 60]> 
                                 Framecount to use on frametype lookahead
          Framecount to use on frametype lookahead. Currently default can cause
          sync-issues on unmuxable output, like rtsp-output without ts-mux
      --sout-x264-intra-refresh, --no-sout-x264-intra-refresh 
                                 Use Periodic Intra Refresh (default disabled)
          Use Periodic Intra Refresh instead of IDR frames (default disabled)
      --sout-x264-mbtree, --no-sout-x264-mbtree 
                                 Use mb-tree ratecontrol (default enabled)
          You can disable use of Macroblock-tree on ratecontrol (default
          enabled)
      --sout-x264-fast-pskip, --no-sout-x264-fast-pskip 
                                 Early SKIP detection on P-frames (default
                                 enabled)
          Early SKIP detection on P-frames. (default enabled)
      --sout-x264-dct-decimate, --no-sout-x264-dct-decimate 
                                 Coefficient thresholding on P-frames (default
                                 enabled)
          Coefficient thresholding on P-frames.Eliminate dct blocks containing
          only a small single coefficient. (default enabled)
      --sout-x264-nr <integer [0 .. 1000]> 
                                 Noise reduction
          Dct-domain noise reduction. Adaptive pseudo-deadzone. 10 to 1000
          seems to be a useful range.
      --sout-x264-deadzone-inter <integer [0 .. 32]> 
                                 Inter luma quantization deadzone
          Set the size of the intra luma quantisation deadzone. Range 0 to 32.
      --sout-x264-deadzone-intra <integer [0 .. 32]> 
                                 Intra luma quantization deadzone
          Set the size of the intra luma quantisation deadzone. Range 0 to 32.
      --sout-x264-non-deterministic, --no-sout-x264-non-deterministic 
                                 Non-deterministic optimizations when threaded
                                 (default disabled)
          Slightly improve quality of SMP, at the cost of repeatability.
          (default disabled)
      --sout-x264-asm, --no-sout-x264-asm 
                                 CPU optimizations (default enabled)
          Use assembler CPU optimizations. (default enabled)
      --sout-x264-psnr, --no-sout-x264-psnr 
                                 PSNR computation (default disabled)
          Compute and print PSNR stats. This has no effect on the actual
          encoding quality. (default disabled)
      --sout-x264-ssim, --no-sout-x264-ssim 
                                 SSIM computation (default disabled)
          Compute and print SSIM stats. This has no effect on the actual
          encoding quality. (default disabled)
      --sout-x264-quiet, --no-sout-x264-quiet 
                                 Quiet mode (default disabled)
          Quiet mode (default disabled)
      --sout-x264-sps-id <integer [-2147483648 .. 2147483647]> 
                                 SPS and PPS id numbers
          Set SPS and PPS id numbers to allow concatenating streams with
          different settings.
      --sout-x264-aud, --no-sout-x264-aud 
                                 Access unit delimiters (default disabled)
          Generate access unit delimiter NAL units. (default disabled)
      --sout-x264-verbose, --no-sout-x264-verbose 
                                 Statistics (default disabled)
          Print stats for each frame. (default disabled)
      --sout-x264-stats <string> Filename for 2 pass stats file
          Filename for 2 pass stats file for multi-pass encoding.
      --sout-x264-preset {ultrafast,superfast,veryfast,faster,fast,medium,slow,slower,veryslow,placebo} 
                                 Default preset setting used
          Default preset setting used
      --sout-x264-tune {film,animation,grain,stillimage,psnr,ssim,fastdecode,zerolatency} 
                                 Default tune setting used
          Default tune setting used
      --sout-x264-options <string> 
                                 x264 advanced options.
          x264 advanced options, in the form {opt=val,op2=val2} .

 Libtwolame audio encoder (twolame)
      --sout-twolame-quality <float> 
                                 Encoding quality
          Force a specific encoding quality between 0.0 (high) and 50.0 (low),
          instead of specifying a particular bitrate. This will produce a VBR
          stream.
      --sout-twolame-mode {0 (Stereo), 1 (Dual mono), 2 (Joint stereo)} 
                                 Stereo mode
          Handling mode for stereo streams
      --sout-twolame-vbr, --no-sout-twolame-vbr 
                                 VBR mode (default disabled)
          Use Variable BitRate. Default is to use Constant BitRate (CBR).
          (default disabled)
      --sout-twolame-psy <integer [-2147483648 .. 2147483647]> 
                                 Psycho-acoustic model
          Integer from -1 (no model) to 4.

 JPEG image decoder (jpeg)
   Encoding:
      --sout-jpeg-quality <integer [0 .. 100]> 
                                 Quality level
          Quality level for encoding (this can enlarge or reduce output image
          size).

 Vorbis audio decoder (vorbis)
      --sout-vorbis-quality <integer [0 .. 10]> 
                                 Encoding quality
          Enforce a quality between 1 (low) and 10 (high), instead of
          specifying a particular bitrate. This will produce a VBR stream.
      --sout-vorbis-max-bitrate <integer [-2147483648 .. 2147483647]> 
                                 Maximum encoding bitrate
          Maximum bitrate in kbps. This is useful for streaming applications.
      --sout-vorbis-min-bitrate <integer [-2147483648 .. 2147483647]> 
                                 Minimum encoding bitrate
          Minimum bitrate in kbps. This is useful for encoding for a fixed-size
          channel.
      --sout-vorbis-cbr, --no-sout-vorbis-cbr 
                                 CBR encoding (default disabled)
          Force a constant bitrate encoding (CBR). (default disabled)

 Dummy decoder (ddummy)
      --dummy-save-es, --no-dummy-save-es 
                                 Save raw codec data (default disabled)
          Save the raw codec data if you have selected/forced the dummy decoder
          in the main options. (default disabled)

 FFmpeg audio/video decoder (avcodec)
 Various audio and video decoders/encoders delivered by the FFmpeg library. This includes (MS)MPEG4, DivX, SV1,H261, H263, H264, WMV, WMA, AAC, AMR, DV, MJPEG and other codecs
   Decoding:
      --avcodec-dr, --no-avcodec-dr 
                                 Direct rendering (default enabled)
          Direct rendering (default enabled)
      --avcodec-error-resilience <integer [-2147483648 .. 2147483647]> 
                                 Error resilience
          libavcodec can do error resilience. However, with a buggy encoder
          (such as the ISO MPEG-4 encoder from M$) this can produce a lot of
          errors. Valid values range from 0 to 4 (0 disables all errors
          resilience).
      --avcodec-workaround-bugs <integer [-2147483648 .. 2147483647]> 
                                 Workaround bugs
          Try to fix some bugs: 1  autodetect 2  old msmpeg4 4  xvid interlaced
          8  ump4  16 no padding 32 ac vlc 64 Qpel chroma. This must be the sum
          of the values. For example, to fix "ac vlc" and "ump4", enter 40.
      --avcodec-hurry-up, --no-avcodec-hurry-up 
                                 Hurry up (default enabled)
          The decoder can partially decode or skip frame(s) when there is not
          enough time. It’s useful with low CPU power but it can produce
          distorted pictures. (default enabled)
      --avcodec-skip-frame <integer [-1 .. 4]> 
                                 Skip frame (default=0)
          Force skipping of frames to speed up decoding (-1=None, 0=Default,
          1=B-frames, 2=P-frames, 3=B+P frames, 4=all frames).
      --avcodec-skip-idct <integer [-1 .. 4]> 
                                 Skip idct (default=0)
          Force skipping of idct to speed up decoding for frame types (-1=None,
          0=Default, 1=B-frames, 2=P-frames, 3=B+P frames, 4=all frames).
      --avcodec-vismv <integer [-2147483648 .. 2147483647]> 
                                 Visualise motion vectors
          You can overlay the motion vectors (arrows showing how the images
          move) on the image. This value is a mask, based on these values: 1 -
          visualize forward predicted MVs of P frames 2 - visualize forward
          predicted MVs of B frames 4 - visualize backward predicted MVs of B
          frames To visualize all vectors, the value should be 7.
      --avcodec-fast, --no-avcodec-fast 
                                 Allow speed tricks (default disabled)
          Allow non specification compliant speedup tricks. Faster but
          error-prone. (default disabled)
      --avcodec-skiploopfilter {0 (None), 1 (Non-ref), 2 (Bidir), 3 (Non-key), 4 (All)} 
                                 Skip the loop filter for H.264 decoding
          Skipping the loop filter (aka deblocking) usually has a detrimental
          effect on quality. However it provides a big speedup for high
          definition streams.
      --avcodec-debug <integer [-2147483648 .. 2147483647]> 
                                 Debug mask
          Set FFmpeg debug mask
      --avcodec-codec <string>   Codec name
          Internal libavcodec codec name
      --avcodec-hw <string>      Hardware decoding
          This allows hardware decoding when available.
      --avcodec-threads <integer [-2147483648 .. 2147483647]> 
                                 Threads
          Number of threads used for decoding, 0 meaning auto
      --avcodec-options <string> Advanced options
          Advanced options, in the form {opt=val,opt2=val2}.
   Encoding:
      --sout-avcodec-codec <string> 
                                 Codec name
          Internal libavcodec codec name
      --sout-avcodec-hq {rd,bits,simple} 
                                 Quality level
          Quality level for the encoding of motions vectors (this can slow down
          the encoding very much).
      --sout-avcodec-keyint <integer [-2147483648 .. 2147483647]> 
                                 Ratio of key frames
          Number of frames that will be coded for one key frame.
      --sout-avcodec-bframes <integer [-2147483648 .. 2147483647]> 
                                 Ratio of B frames
          Number of B frames that will be coded between two reference frames.
      --sout-avcodec-hurry-up, --no-sout-avcodec-hurry-up 
                                 Hurry up (default disabled)
          The encoder can make on-the-fly quality tradeoffs if your CPU can’t
          keep up with the encoding rate. It will disable trellis quantisation,
          then the rate distortion of motion vectors (hq), and raise the noise
          reduction threshold to ease the encoder’s task. (default disabled)
      --sout-avcodec-interlace, --no-sout-avcodec-interlace 
                                 Interlaced encoding (default disabled)
          Enable dedicated algorithms for interlaced frames. (default disabled)
      --sout-avcodec-interlace-me, --no-sout-avcodec-interlace-me 
                                 Interlaced motion estimation (default enabled)
          Enable interlaced motion estimation algorithms. This requires more
          CPU. (default enabled)
      --sout-avcodec-vt <integer [-2147483648 .. 2147483647]> 
                                 Video bitrate tolerance
          Video bitrate tolerance in kbit/s.
      --sout-avcodec-pre-me, --no-sout-avcodec-pre-me 
                                 Pre-motion estimation (default disabled)
          Enable the pre-motion estimation algorithm. (default disabled)
      --sout-avcodec-rc-buffer-size <integer [-2147483648 .. 2147483647]> 
                                 Rate control buffer size
          Rate control buffer size (in kbytes). A bigger buffer will allow for
          better rate control, but will cause a delay in the stream.
      --sout-avcodec-rc-buffer-aggressivity <float> 
                                 Rate control buffer aggressiveness
          Rate control buffer aggressiveness.
      --sout-avcodec-i-quant-factor <float> 
                                 I quantisation factor
          Quantization factor of I frames, compared with P frames (for instance
          1.0 => same qscale for I and P frames).
      --sout-avcodec-noise-reduction <integer [-2147483648 .. 2147483647]> 
                                 Noise reduction
          Enable a simple noise reduction algorithm to lower the encoding
          length and bitrate, at the expense of lower quality frames.
      --sout-avcodec-mpeg4-matrix, --no-sout-avcodec-mpeg4-matrix 
                                 MPEG4 quantization matrix (default disabled)
          Use the MPEG4 quantization matrix for MPEG2 encoding. This generally
          yields a better looking picture, while still retaining the
          compatibility with standard MPEG2 decoders. (default disabled)
      --sout-avcodec-qmin <integer [-2147483648 .. 2147483647]> 
                                 Minimum video quantiser scale
          Minimum video quantiser scale.
      --sout-avcodec-qmax <integer [-2147483648 .. 2147483647]> 
                                 Maximum video quantiser scale
          Maximum video quantiser scale.
      --sout-avcodec-trellis, --no-sout-avcodec-trellis 
                                 Trellis quantization (default disabled)
          Enable trellis quantization (rate distortion for block coefficients).
          (default disabled)
      --sout-avcodec-qscale <float> 
                                 Fixed quantiser scale
          A fixed video quantiser scale for VBR encoding (accepted values: 0.01
          to 255.0).
      --sout-avcodec-strict <integer [-2 .. 2]> 
                                 Strict standard compliance
          Force a strict standard compliance when encoding (accepted values: -2
          to 2).
      --sout-avcodec-lumi-masking <float> 
                                 Luminance masking
          Raise the quantiser for very bright macroblocks (default: 0.0).
      --sout-avcodec-dark-masking <float> 
                                 Darkness masking
          Raise the quantiser for very dark macroblocks (default: 0.0).
      --sout-avcodec-p-masking <float> 
                                 Motion masking
          Raise the quantiser for macroblocks with a high temporal complexity
          (default: 0.0).
      --sout-avcodec-border-masking <float> 
                                 Border masking
          Raise the quantiser for macroblocks at the border of the frame
          (default: 0.0).
      --sout-avcodec-luma-elim-threshold <integer [-2147483648 .. 2147483647]> 
                                 Luminance elimination
          Eliminates luminance blocks when the PSNR isn’t much changed
          (default: 0.0). The H264 specification recommends -4.
      --sout-avcodec-chroma-elim-threshold <integer [-2147483648 .. 2147483647]> 
                                 Chrominance elimination
          Eliminates chrominance blocks when the PSNR isn’t much changed
          (default: 0.0). The H264 specification recommends 7.
      --sout-avcodec-aac-profile <string> 
                                 Specify AAC audio profile to use
          Specify the AAC audio profile to use for encoding the audio
          bitstream. It takes the following options: main, low, ssr (not
          supported),ltp, hev1, hev2 (default: low). hev1 and hev2 are
          currently supported only with libfdk-aac enabled libavcodec
      --sout-avcodec-options <string> 
                                 Advanced options
          Advanced options, in the form {opt=val,opt2=val2}.

 Theora video decoder (theora)
      --theora-postproc <integer [-2147483648 .. 2147483647]> 
                                 Post processing quality
      --sout-theora-quality <integer [-2147483648 .. 2147483647]> 
                                 Encoding quality
          Enforce a quality between 1 (low) and 10 (high), instead of
          specifying a particular bitrate. This will produce a VBR stream.

 Dirac video decoder using libschroedinger (schroedinger)
   Encoding:
      --sout-schro-rate-control {constant_noise_threshold,constant_bitrate,low_delay,lossless,constant_lambda,constant_error,constant_quality} 
                                 Rate control method
          Method used to encode the video sequence
      --sout-schro-quality <float [-1.000000 .. 10.000000]> 
                                 Constant quality factor
          Quality factor to use in constant quality mode
      --sout-schro-noise-threshold <float [-1.000000 .. 100.000000]> 
                                 Noise Threshold
          Noise threshold to use in constant noise threshold mode
      --sout-schro-bitrate <integer [-1 .. 2147483647]> 
                                 CBR bitrate (kbps)
          Target bitrate in kbps when encoding in constant bitrate mode
      --sout-schro-max-bitrate <integer [-1 .. 2147483647]> 
                                 Maximum bitrate (kbps)
          Maximum bitrate in kbps when encoding in constant bitrate mode
      --sout-schro-min-bitrate <integer [-1 .. 2147483647]> 
                                 Minimum bitrate (kbps)
          Minimum bitrate in kbps when encoding in constant bitrate mode
      --sout-schro-gop-structure {adaptive,intra_only,backref,chained_backref,biref,chained_biref} 
                                 GOP structure
          GOP structure used to encode the video sequence
      --sout-schro-gop-length <integer [-1 .. 2147483647]> 
                                 GOP length
          Number of pictures between successive sequence headers i.e. length of
          the group of pictures
      --sout-schro-chroma-fmt {420,422,444} 
                                 Chroma format
          Picking chroma format will force a conversion of the video into that
          format
      --sout-schro-coding-mode {auto,progressive,field} 
                                 Picture coding mode
          Field coding is where interlaced fields are coded separately as
          opposed to a pseudo-progressive frame
      --sout-schro-mv-precision {1,1/2,1/4,1/8} 
                                 Motion Vector precision
          Motion Vector precision in pels
      --sout-schro-motion-block-size {automatic,small,medium,large} 
                                 Size of motion compensation blocks
          Size of motion compensation blocks
      --sout-schro-motion-block-overlap {automatic,none,partial,full} 
                                 Overlap of motion compensation blocks
          Overlap of motion compensation blocks
      --sout-schro-me-combined <integer [-1 .. 1]> 
                                 Three component motion estimation
          Use chroma as part of the motion estimation process
      --sout-schro-enable-hierarchical-me <integer [-1 .. 1]> 
                                 Enable hierarchical Motion Estimation
          Enable hierarchical Motion Estimation
      --sout-schro-downsample-levels <integer [-1 .. 8]> 
                                 Number of levels of downsampling
          Number of levels of downsampling in hierarchical motion estimation
          mode
      --sout-schro-enable-global-me <integer [-1 .. 1]> 
                                 Enable Global Motion Estimation
          Enable Global Motion Estimation
      --sout-schro-enable-phasecorr-me <integer [-1 .. 1]> 
                                 Enable Phase Correlation Estimation
          Enable Phase Correlation Estimation
      --sout-schro-intra-wavelet {desl_dubuc_9_7,le_gall_5_3,desl_dubuc_13_7,haar_0,haar_1,fidelity,daub_9_7} 
                                 Intra picture DWT filter
          Intra picture DWT filter
      --sout-schro-inter-wavelet {desl_dubuc_9_7,le_gall_5_3,desl_dubuc_13_7,haar_0,haar_1,fidelity,daub_9_7} 
                                 Inter picture DWT filter
          Inter picture DWT filter
      --sout-schro-transform-depth <integer [-1 .. 6]> 
                                 Number of DWT iterations
          Also known as DWT levels
      --sout-schro-enable-multiquant <integer [-1 .. 1]> 
                                 Enable multiple quantisers
          Enable multiple quantisers per subband (one per codeblock)
      --sout-schro-codeblock-size {automatic,small,medium,large,full} 
                                 Size of code blocks in each subband
          Size of code blocks in each subband
      --sout-schro-filtering {none,center_weighted_median,gaussian,add_noise,adaptive_gaussian,lowpass} 
                                 Prefilter
          Enable adaptive prefiltering
      --sout-schro-filter-value <float [-1.000000 .. 100.000000]> 
                                 Amount of prefiltering
          Higher value implies more prefiltering
      --sout-schro-enable-scd <integer [-1 .. 1]> 
                                 Enable Scene Change Detection
          Enable Scene Change Detection
      --sout-schro-perceptual-weighting {none,ccir959,moo,manos_sakrison} 
                                 perceptual weighting method
          perceptual weighting method
      --sout-schro-perceptual-distance <float [-1.000000 .. 100.000000]> 
                                 perceptual distance
          perceptual distance to calculate perceptual weight
      --sout-schro-enable-noarith <integer [-1 .. 1]> 
                                 Disable arithmetic coding
          Use variable length codes instead, useful for very high bitrates
      --sout-schro-horiz-slices <integer [-1 .. 2147483647]> 
                                 Horizontal slices per frame
          Number of horizontal slices per frame in low delay mode
      --sout-schro-vert-slices <integer [-1 .. 2147483647]> 
                                 Vertical slices per frame
          Number of vertical slices per frame in low delay mode
      --sout-schro-force-profile {auto,vc2_low_delay,vc2_simple,vc2_main,main} 
                                 Force Profile
          Force Profile

 Text subtitle decoder (subsdec)
      --subsdec-align {0 (Centre), 1 (Left), 2 (Right)} 
                                 Subtitle justification
          Set the justification of subtitles
      --subsdec-encoding {,system,UTF-8,UTF-16,UTF-16BE,UTF-16LE,GB18030,ISO-8859-15,Windows-1252,IBM850,ISO-8859-2,Windows-1250,ISO-8859-3,ISO-8859-10,Windows-1251,KOI8-R,KOI8-U,ISO-8859-6,Windows-1256,ISO-8859-7,Windows-1253,ISO-8859-8,Windows-1255,ISO-8859-9,Windows-1254,ISO-8859-11,Windows-874,ISO-8859-13,Windows-1257,ISO-8859-14,ISO-8859-16,ISO-2022-CN-EXT,EUC-CN,ISO-2022-JP-2,EUC-JP,Shift_JIS,CP949,ISO-2022-KR,Big5,ISO-2022-TW,Big5-HKSCS,VISCII,Windows-1258} 
                                 Subtitle text encoding
          Set the encoding used in text subtitles
      --subsdec-autodetect-utf8, --no-subsdec-autodetect-utf8 
                                 UTF-8 subtitle autodetection (default enabled)
          This enables automatic detection of UTF-8 encoding within subtitle
          files. (default enabled)
      --subsdec-formatted, --no-subsdec-formatted 
                                 Formatted Subtitles (default enabled)
          Some subtitle formats allow for text formatting. VLC partly
          implements this, but you can choose to disable all formatting.
          (default enabled)

 DVD subtitles decoder (spudec)
      --dvdsub-transparency, --no-dvdsub-transparency 
                                 Disable DVD subtitle transparency (default
                                 disabled)
          Removes all transparency effects used in DVD subtitles. (default
          disabled)

 DVB subtitles decoder (dvbsub)
      --dvbsub-position {0 (Centre), 1 (Left), 2 (Right), 4 (Top), 8 (Bottom), 5 (Top-Left), 6 (Top-Right), 9 (Bottom-Left), 10 (Bottom-Right)} 
                                 Subpicture position
          You can enforce the subpicture position on the video (0=center,
          1=left, 2=right, 4=top, 8=bottom, you can also use combinations of
          these values, e.g. 6=top-right).
      --dvbsub-x <integer [-2147483648 .. 2147483647]> 
                                 Decoding X coordinate
          X coordinate of the rendered subtitle
      --dvbsub-y <integer [-2147483648 .. 2147483647]> 
                                 Decoding Y coordinate
          Y coordinate of the rendered subtitle
      --sout-dvbsub-x <integer [-2147483648 .. 2147483647]> 
                                 Encoding X coordinate
          X coordinate of the encoded subtitle
      --sout-dvbsub-y <integer [-2147483648 .. 2147483647]> 
                                 Encoding Y coordinate
          Y coordinate of the encoded subtitle

 Kate overlay decoder (kate)
 Kate is a codec for text and image based overlays.
The Tiger rendering library is needed to render complex Kate streams, but VLC can still render static text and image based subtitles if it is not available.
Note that changing settings below will not take effect until a new stream is played. This will hopefully be fixed soon.
      --kate-formatted, --no-kate-formatted 
                                 Formatted Subtitles (default enabled)
          Kate streams allow for text formatting. VLC partly implements this,
          but you can choose to disable all formatting.Note that this has no
          effect is rendering via Tiger is enabled. (default enabled)

 Speex audio decoder (speex)
      --sout-speex-mode {0 (Narrow-band (8kHz)), 1 (Wide-band (16kHz)), 2 (Ultra-wideband (32kHz))} 
                                 Mode
          Enforce the mode of the encoder.
      --sout-speex-complexity <integer [1 .. 10]> 
                                 Encoding complexity
          Enforce the complexity of the encoder.
      --sout-speex-cbr, --no-sout-speex-cbr 
                                 CBR encoding (default disabled)
          Enforce a constant bitrate encoding (CBR) instead of default variable
          bitrate encoding (VBR). (default disabled)
      --sout-speex-quality <float [0.000000 .. 10.000000]> 
                                 Encoding quality
          Enforce a quality between 0 (low) and 10 (high).
      --sout-speex-max-bitrate <integer [-2147483648 .. 2147483647]> 
                                 Maximal bitrate
          Enforce the maximal VBR bitrate
      --sout-speex-vad, --no-sout-speex-vad 
                                 Voice activity detection (default enabled)
          Enable voice activity detection (VAD). It is automatically activated
          in VBR mode. (default enabled)
      --sout-speex-dtx, --no-sout-speex-dtx 
                                 Discontinuous Transmission (default disabled)
          Enable discontinuous transmission (DTX). (default disabled)

 Mouse gestures control interface (gestures)
      --gestures-threshold <integer [-2147483648 .. 2147483647]> 
                                 Motion threshold (10-100)
          Amount of movement required for a mouse gesture to be recorded.
      --gestures-button {left,middle,right} 
                                 Trigger button
          Trigger button for mouse gestures.

 Infrared remote control interface (lirc)
      --lirc-file <string>       Change the lirc configuration file
          Tell lirc to read this configuration file. By default it searches in
          the users home directory.

 Remote control interface (oldrc)
      --rc-show-pos, --no-rc-show-pos 
                                 Show stream position (default disabled)
          Show the current position in seconds within the stream from time to
          time. (default disabled)
      --rc-fake-tty, --no-rc-fake-tty 
                                 Fake TTY (default disabled)
          Force the rc module to use stdin as if it was a TTY. (default
          disabled)
      --rc-unix <string>         UNIX socket command input
          Accept commands over a Unix socket rather than stdin.
      --rc-host <string>         TCP command input
          Accept commands over a socket rather than stdin. You can set the
          address and port the interface will bind to.

 Network synchronization (netsync)
      --netsync-master, --no-netsync-master 
                                 Network master clock (default disabled)
          When set, this VLC instance will act as the master clock for
          synchronization for clients listening (default disabled)
      --netsync-master-ip <string> 
                                 Master server ip address
          The IP address of the network master clock to use for clock
          synchronization.
      --netsync-timeout <integer [-2147483648 .. 2147483647]> 
                                 UDP timeout (in ms)
          Length of time (in ms) until aborting data reception.

 Canvas video filter (canvas)
 Automatically resize and pad a video
      --canvas-width <integer [0 .. 2147483647]> 
                                 Output width
          Output (canvas) image width
      --canvas-height <integer [0 .. 2147483647]> 
                                 Output height
          Output (canvas) image height
      --canvas-aspect <string>   Output picture aspect ratio
          Set the canvas' picture aspect ratio. If omitted, the canvas is
          assumed to have the same SAR as the input.
      --canvas-padd, --no-canvas-padd 
                                 Pad video (default enabled)
          If enabled, video will be padded to fit in canvas after scaling.
          Otherwise, video will be cropped to fix in canvas after scaling.
          (default enabled)

 RSS and Atom feed display (rss)
 Display a RSS or ATOM Feed on your video
      --rss-urls <string>        Feed URLs
          RSS/Atom feed '|' (pipe) separated URLs.
   Position:
      --rss-x <integer [-2147483648 .. 2147483647]> 
                                 X offset
          X offset, from the left screen edge.
      --rss-y <integer [-2147483648 .. 2147483647]> 
                                 Y offset
          Y offset, down from the top.
      --rss-position {0 (Centre), 1 (Left), 2 (Right), 4 (Top), 8 (Bottom), 5 (Top-Left), 6 (Top-Right), 9 (Bottom-Left), 10 (Bottom-Right)} 
                                 Text position
          You can enforce the text position on the video (0=center, 1=left,
          2=right, 4=top, 8=bottom; you can also use combinations of these
          values, eg 6 = top-right).
   Font:
      --rss-opacity <integer [0 .. 255]> 
                                 Opacity
          Opacity (inverse of transparency) of overlay text. 0 = transparent,
          255 = totally opaque.
      --rss-color {-268435456 (Default), 0 (Black), 8421504 (Grey), 12632256 (Silver), 16777215 (White), 8388608 (Maroon), 16711680 (Red), 16711935 (Fuchsia), 16776960 (Yellow), 8421376 (Olive), 32768 (Green), 32896 (Teal), 65280 (Lime), 8388736 (Purple), 128 (Navy), 255 (Blue), 65535 (Aqua)} 
                                 Colour
          Colour of the text that will be rendered on the video. This must be
          an hexadecimal (like HTML colors). The first two chars are for red,
          then green, then blue. #000000 = black, #FF0000 = red, #00FF00 =
          green, #FFFF00 = yellow (red + green), #FFFFFF = white
      --rss-size <integer [-1 .. 4096]> 
                                 Font size, pixels
          Font size, in pixels. Default is -1 (use default font size).
   Misc:
      --rss-speed <integer [-2147483648 .. 2147483647]> 
                                 Speed of feeds
          Speed of the RSS/Atom feeds in microseconds (bigger is slower).
      --rss-length <integer [-2147483648 .. 2147483647]> 
                                 Max length
          Maximum number of characters displayed on the screen.
      --rss-ttl <integer [-2147483648 .. 2147483647]> 
                                 Refresh time
          Number of seconds between each forced refresh of the feeds. 0 means
          that the feeds are never updated.
      --rss-images, --no-rss-images 
                                 Feed images (default enabled)
          Display feed images if available. (default enabled)
      --rss-title {-1 (Default), 0 (Don't show), 1 (Always visible), 2 (Scroll with feed)} 
                                 Title display mode
          Title display mode. Default is 0 (hidden) if the feed has an image
          and feed images are enabled, 1 otherwise.

 antiflicker video filter (antiflicker)
      --antiflicker-window-size <integer [0 .. 100]> 
                                 Window size
          Number of frames (0 to 100)
      --antiflicker-softening-size <integer [0 .. 31]> 
                                 Softening value
          Number of frames consider for smoothening (0 to 30)

 Mosaic video sub source (mosaic)
      --mosaic-alpha <integer [0 .. 255]> 
                                 Transparency
          Transparency of the mosaic foreground pictures. 0 means transparent,
          255 opaque (default).
      --mosaic-height <integer [-2147483648 .. 2147483647]> 
                                 Height
          Total height of the mosaic, in pixels.
      --mosaic-width <integer [-2147483648 .. 2147483647]> 
                                 Width
          Total width of the mosaic, in pixels.
      --mosaic-align {0 (Centre), 1 (Left), 2 (Right), 4 (Top), 8 (Bottom), 5 (Top-Left), 6 (Top-Right), 9 (Bottom-Left), 10 (Bottom-Right)} 
                                 Mosaic alignment
          You can enforce the mosaic alignment on the video (0=center, 1=left,
          2=right, 4=top, 8=bottom, you can also use combinations of these
          values, eg 6 = top-right).
      --mosaic-xoffset <integer [-2147483648 .. 2147483647]> 
                                 Top left corner X coordinate
          X Coordinate of the top-left corner of the mosaic.
      --mosaic-yoffset <integer [-2147483648 .. 2147483647]> 
                                 Top left corner Y coordinate
          Y Coordinate of the top-left corner of the mosaic.
      --mosaic-borderw <integer [-2147483648 .. 2147483647]> 
                                 Border width
          Width in pixels of the border between miniatures.
      --mosaic-borderh <integer [-2147483648 .. 2147483647]> 
                                 Border height
          Height in pixels of the border between miniatures.
      --mosaic-position {0 (auto), 1 (fixed), 2 (offsets)} 
                                 Positioning method
          Positioning method for the mosaic. auto: automatically choose the
          best number of rows and columns. fixed: use the user-defined number
          of rows and columns. offsets: use the user-defined offsets for each
          image.
      --mosaic-rows <integer [-2147483648 .. 2147483647]> 
                                 Number of rows
          Number of image rows in the mosaic (only used if positioning method
          is set to "fixed").
      --mosaic-cols <integer [-2147483648 .. 2147483647]> 
                                 Number of columns
          Number of image columns in the mosaic (only used if positioning
          method is set to "fixed".
      --mosaic-keep-aspect-ratio, --no-mosaic-keep-aspect-ratio 
                                 Keep aspect ratio (default disabled)
          Keep the original aspect ratio when resizing mosaic elements.
          (default disabled)
      --mosaic-keep-picture, --no-mosaic-keep-picture 
                                 Keep original size (default disabled)
          Keep the original size of mosaic elements. (default disabled)
      --mosaic-order <string>    Elements order
          You can enforce the order of the elements on the mosaic. You must
          give a comma-separated list of picture ID(s).These IDs are assigned
          in the "mosaic-bridge" module.
      --mosaic-offsets <string>  Offsets in order
          You can enforce the (x,y) offsets of the elements on the mosaic (only
          used if positioning method is set to "offsets"). You must give a
          comma-separated list of coordinates (eg: 10,10,150,10).
      --mosaic-delay <integer [-2147483648 .. 2147483647]> 
                                 Delay
          Pictures coming from the mosaic elements will be delayed according to
          this value (in milliseconds). For high values you will need to raise
          caching at input.

 Extract RGB component video filter (extract)
      --extract-component {16711680 (Red), 65280 (Green), 255 (Blue)} 
                                 RGB component to extract
          RGB component to extract. 0 for Red, 1 for Green and 2 for Blue.

 Dynamic video overlay (dynamicoverlay)
      --overlay-input <string>   Input FIFO
          FIFO which will be read for commands
      --overlay-output <string>  Output FIFO
          FIFO which will be written to for responses

 Scene video filter (scene)
 Send your video to picture files
      --scene-format <string>    Image format
          Format of the output images (png, jpeg, ...).
      --scene-width <integer [-2147483648 .. 2147483647]> 
                                 Image width
          You can enforce the image width. By default (-1) VLC will adapt to
          the video characteristics.
      --scene-height <integer [-2147483648 .. 2147483647]> 
                                 Image height
          You can enforce the image height. By default (-1) VLC will adapt to
          the video characteristics.
      --scene-prefix <string>    Filename prefix
          Prefix of the output images filenames. Output filenames will have the
          "prefixNUMBER.format" form if replace is not true.
      --scene-path <string>      Directory path prefix
          Directory path where images files should be saved. If not set, then
          images will be automatically saved in users homedir.
      --scene-replace, --no-scene-replace 
                                 Always write to the same file (default
                                 disabled)
          Always write to the same file instead of creating one file per image.
          In this case, the number is not appended to the filename. (default
          disabled)
      --scene-ratio <integer [1 .. 2147483647]> 
                                 Recording ratio
          Ratio of images to record. 3 means that one image out of three is
          recorded.

 Sharpen video filter (sharpen)
 Augment contrast between contours.
      --sharpen-sigma <float [0.000000 .. 2.000000]> 
                                 Sharpen strength (0-2)
          Set the Sharpen strength, between 0 and 2. Defaults to 0.05.

 Alpha mask video filter (alphamask)
 Use an image's alpha channel as a transparency mask.
      --alphamask-mask <string>  Transparency mask
          Alpha blending transparency mask. Uses a png alpha channel.

 Image properties filter (adjust)
      --contrast <float [0.000000 .. 2.000000]> 
                                 Image contrast (0-2)
          Set the image contrast, between 0 and 2. Defaults to 1.
      --brightness <float [0.000000 .. 2.000000]> 
                                 Image brightness (0-2)
          Set the image brightness, between 0 and 2. Defaults to 1.
      --hue <integer [0 .. 360]> Image hue (0-360)
          Set the image hue, between 0 and 360. Defaults to 0.
      --saturation <float [0.000000 .. 3.000000]> 
                                 Image saturation (0-3)
          Set the image saturation, between 0 and 3. Defaults to 1.
      --gamma <float [0.010000 .. 10.000000]> 
                                 Image gamma (0-10)
          Set the image gamma, between 0.01 and 10. Defaults to 1.
      --brightness-threshold, --no-brightness-threshold 
                                 Brightness threshold (default disabled)
          When this mode is enabled, pixels will be shown as black or white.
          The threshold value will be the brightness defined below. (default
          disabled)

 Marquee display (marq)
 Display text above the video
      --marq-marquee <string>    Text
          Marquee text to display. (Available format strings: %Y = year, %m =
          month, %d = day, %H = hour, %M = minute, %S = second, ...)
      --marq-file <string>       Text file
          File to read the marquee text from.
   Position:
      --marq-x <integer [-2147483648 .. 2147483647]> 
                                 X offset
          X offset, from the left screen edge.
      --marq-y <integer [-2147483648 .. 2147483647]> 
                                 Y offset
          Y offset, down from the top.
      --marq-position {0 (Centre), 1 (Left), 2 (Right), 4 (Top), 8 (Bottom), 5 (Top-Left), 6 (Top-Right), 9 (Bottom-Left), 10 (Bottom-Right)} 
                                 Marquee position
          You can enforce the marquee position on the video (0=center, 1=left,
          2=right, 4=top, 8=bottom, you can also use combinations of these
          values, eg 6 = top-right).
   Font:
      --marq-opacity <integer [0 .. 255]> 
                                 Opacity
          Opacity (inverse of transparency) of overlayed text. 0 = transparent,
          255 = totally opaque. 
      --marq-color {-268435456 (Default), 0 (Black), 8421504 (Grey), 12632256 (Silver), 16777215 (White), 8388608 (Maroon), 16711680 (Red), 16711935 (Fuchsia), 16776960 (Yellow), 8421376 (Olive), 32768 (Green), 32896 (Teal), 65280 (Lime), 8388736 (Purple), 128 (Navy), 255 (Blue), 65535 (Aqua)} 
                                 Colour
          Colour of the text that will be rendered on the video. This must be
          an hexadecimal (like HTML colors). The first two chars are for red,
          then green, then blue. #000000 = black, #FF0000 = red, #00FF00 =
          green, #FFFF00 = yellow (red + green), #FFFFFF = white
      --marq-size <integer [-1 .. 4096]> 
                                 Font size, pixels
          Font size, in pixels. Default is -1 (use default font size).
   Misc:
      --marq-timeout <integer [-2147483648 .. 2147483647]> 
                                 Timeout
          Number of milliseconds the marquee must remain displayed. Default
          value is 0 (remains forever).
      --marq-refresh <integer [-2147483648 .. 2147483647]> 
                                 Refresh period in ms
          Number of milliseconds between string updates. This is mainly useful
          when using meta data or time format string sequences.

 Colour threshold filter (colorthres)
 Select one colour in the video
      --colorthres-color {16711680 (Red), 16711935 (Fuchsia), 16776960 (Yellow), 65280 (Lime), 255 (Blue), 65535 (Aqua)} 
                                 Colour
          Colours similar to this will be kept, others will be greyscaled. This
          must be an hexadecimal (like HTML colors). The first two chars are
          for red, then green, then blue. #000000 = black, #FF0000 = red,
          #00FF00 = green, #FFFF00 = yellow (red + green), #FFFFFF = white
      --colorthres-saturationthres <integer [-2147483648 .. 2147483647]> 
                                 Saturation threshold
      --colorthres-similaritythres <integer [-2147483648 .. 2147483647]> 
                                 Similarity threshold

 Deinterlacing video filter (deinterlace)
      --sout-deinterlace-mode {discard,blend,mean,bob,linear,x,yadif,yadif2x,phosphor,ivtc} 
                                 Streaming deinterlace mode
          Deinterlace method to use for streaming.
      --sout-deinterlace-phosphor-chroma {1 (Latest), 2 (AltLine), 3 (Blend), 4 (Upconvert)} 
                                 Phosphor chroma mode for 4:2:0 input
          Choose handling for colours in those output frames that fall across
          input frame boundaries.   Latest: take chroma from new (bright) field
          only. Good for interlaced input, such as videos from a camcorder.  
          AltLine: take chroma line 1 from top field, line 2 from bottom field,
          etc.  Default, good for NTSC telecined input (anime DVDs, etc.).  
          Blend: average input field chromas. May distort the colours of the
          new (bright) field, too.   Upconvert: output in 4:2:2 format
          (independent chroma for each field). Best simulation, but requires
          more CPU and memory bandwidth.
      --sout-deinterlace-phosphor-dimmer {1 (Off), 2 (Low), 3 (Medium), 4 (High)} 
                                 Phosphor old field dimmer strength
          This controls the strength of the darkening filter that simulates CRT
          TV phosphor light decay for the old field in the Phosphor framerate
          doubler. Default: Low.

 Posterise video filter (posterize)
 Posterize video by lowering the number of colours
      --posterize-level <integer [2 .. 256]> 
                                 Posterise level
          Posterize level (number of colours is cube of this value)

 Gaussian blur video filter (gaussianblur)
 Add a blurring effect
      --gaussianblur-sigma <float> 
                                 Gaussian's std deviation
          Gaussian's standard deviation. The blurring will take into account
          pixels up to 3*sigma away in any direction.

 Video cropping filter (croppadd)
   Crop:
      --croppadd-croptop <integer [0 .. 2147483647]> 
                                 Pixels to crop from top
          Number of pixels to crop from the top of the image.
      --croppadd-cropbottom <integer [0 .. 2147483647]> 
                                 Pixels to crop from bottom
          Number of pixels to crop from the bottom of the image.
      --croppadd-cropleft <integer [0 .. 2147483647]> 
                                 Pixels to crop from left
          Number of pixels to crop from the left of the image.
      --croppadd-cropright <integer [0 .. 2147483647]> 
                                 Pixels to crop from right
          Number of pixels to crop from the right of the image.
   Padd:
      --croppadd-paddtop <integer [0 .. 2147483647]> 
                                 Pixels to padd to top
          Number of pixels to padd to the top of the image after cropping.
      --croppadd-paddbottom <integer [0 .. 2147483647]> 
                                 Pixels to padd to bottom
          Number of pixels to padd to the bottom of the image after cropping.
      --croppadd-paddleft <integer [0 .. 2147483647]> 
                                 Pixels to padd to left
          Number of pixels to padd to the left of the image after cropping.
      --croppadd-paddright <integer [0 .. 2147483647]> 
                                 Pixels to padd to right
          Number of pixels to padd to the right of the image after cropping.

 Sepia video filter (sepia)
 Gives video a warmer tone by applying sepia effect
      --sepia-intensity <integer [0 .. 255]> 
                                 Sepia intensity
          Intensity of sepia effect

 Gradfun video filter (gradfun)
 Debanding algorithm
      --gradfun-radius <integer [4 .. 32]> 
                                 Radius
          Radius in pixels
      --gradfun-strength <float [0.510000 .. 255.000000]> 
                                 Strength
          Strength used to modify the value of a pixel

 Erase video filter (erase)
 Remove zones of the video using a picture as mask
      --erase-mask <string>      Image mask
          Image mask. Pixels with an alpha value greater than 50% will be
          erased.
      --erase-x <integer [-2147483648 .. 2147483647]> 
                                 X coordinate
          X coordinate of the mask.
      --erase-y <integer [-2147483648 .. 2147483647]> 
                                 Y coordinate
          Y coordinate of the mask.

 Motion blur filter (motionblur)
      --blur-factor <integer [1 .. 127]> 
                                 Blur factor (1-127)
          The degree of blurring from 1 to 127.

 AtmoLight Filter (atmo)
 This module allows controlling an so called AtmoLight device connected to your computer.
AtmoLight is the homegrown version of what Philips calls AmbiLight.
If you need further information feel free to visit us at

http://www.vdr-wiki.de/wiki/index.php/Atmo-plugin
http://www.vdr-wiki.de/wiki/index.php/AtmoWin

You can find there detailed descriptions on how to build it for yourself and where to get the required parts.
You can also have a look at pictures and some movies showing such a device in live action.
   Choose Devicetype and Connection:
      --atmo-device {1 (Classic AtmoLight), 2 (Quattro AtmoLight), 3 (DMX), 4 (MoMoLight), 5 (fnordlicht)} 
                                 Device type
          Choose your preferred hardware from the list, or choose AtmoWin
          Software to delegate processing to the external process - with more
          options
      --atmo-serialdev <string>  Serial Port/Device
          Name of the serial port where the AtmoLight controller is attached
          to. On Windows usually something like COM1 or COM2. On Linux
          /dev/ttyS01 f.e.
   Illuminate the room with this colour on pause:
      --atmo-usepausecolor, --no-atmo-usepausecolor 
                                 Colour when paused (default disabled)
          Set the colour to show if the user pauses the video. (Have light to
          get another beer?) (default disabled)
      --atmo-pcolor-red <integer [0 .. 255]> 
                                 Pause-Red
          Red component of the pause colour
      --atmo-pcolor-green <integer [0 .. 255]> 
                                 Pause-Green
          Green component of the pause colour
      --atmo-pcolor-blue <integer [0 .. 255]> 
                                 Pause-Blue
          Blue component of the pause colour
      --atmo-fadesteps <integer [1 .. 250]> 
                                 Pause-Fadesteps
          Number of steps to change current colour to pause colour (each step
          takes 40ms)
   Illuminate the room with this colour on shutdown:
      --atmo-ecolor-red <integer [0 .. 255]> 
                                 End-Red
          Red component of the shutdown colour
      --atmo-ecolor-green <integer [0 .. 255]> 
                                 End-Green
          Green component of the shutdown colour
      --atmo-ecolor-blue <integer [0 .. 255]> 
                                 End-Blue
          Blue component of the shutdown colour
      --atmo-efadesteps <integer [1 .. 250]> 
                                 End-Fadesteps
          Number of steps to change current colour to end colour for dimming up
          the light in cinema style... (each step takes 40ms)
   DMX options:
      --atmo-dmx-channels <integer [1 .. 64]> 
                                 Count of AtmoLight channels
          How many AtmoLight channels, should be emulated with that DMX device
      --atmo-dmx-chbase <string> DMX address for each channel
          Define here the DMX base address for each channel use , or ; to
          separate the values
   MoMoLight options:
      --atmo-momo-channels <integer [3 .. 4]> 
                                 Count of channels
          Depending on your MoMoLight hardware choose 3 or 4 channels
   fnordlicht options:
      --atmo-fnordlicht-amount <integer [1 .. 254]> 
                                 Count of fnordlicht's
          Depending on the amount your fnordlicht hardware choose 1 to 254
          channels
   Zone Layout for the build-in Atmo:
      --atmo-zones-top <integer [0 .. 16]> 
                                 Number of zones on top
          Number of zones on the top of the screen
      --atmo-zones-bottom <integer [0 .. 16]> 
                                 Number of zones on bottom
          Number of zones on the bottom of the screen
      --atmo-zones-lr <integer [0 .. 16]> 
                                 Zones on left / right side
          left and right side having always the same number of zones
      --atmo-zone-summary, --no-atmo-zone-summary 
                                 Calculate a average zone (default disabled)
          it contains the average of all pixels in the sample image (only
          useful for single channel AtmoLight) (default disabled)
   Settings for the built-in Live Video Processor only:
      --atmo-edgeweightning <integer [1 .. 30]> 
                                 Edge weightning
          Increasing this value will result in colour more depending on the
          border of the frame.
      --atmo-brightness <integer [50 .. 300]> 
                                 Brightness
          Overall brightness of your LED stripes
      --atmo-darknesslimit <integer [0 .. 10]> 
                                 Darkness limit
          Pixels with a saturation lower than this will be ignored. Should be
          greater than one for letterboxed videos.
      --atmo-huewinsize <integer [0 .. 5]> 
                                 Hue windowing
          Used for statistics.
      --atmo-satwinsize <integer [0 .. 5]> 
                                 Sat windowing
          Used for statistics.
      --atmo-filtermode {0 (No Filtering), 1 (Combined), 2 (Percent)} 
                                 Output Colour filter mode
          defines the how the output colour should be calculated based on
          previous colour
      --atmo-meanlength <integer [300 .. 5000]> 
                                 Filter length (ms)
          Time it takes until a colour is completely changed. This prevents
          flickering.
      --atmo-meanthreshold <integer [1 .. 100]> 
                                 Filter threshold
          How much a colour has to be changed for an immediate colour change.
      --atmo-percentnew <integer [1 .. 100]> 
                                 Filter smoothness (%)
          Filter Smoothness
      --atmo-framedelay <integer [0 .. 200]> 
                                 Frame delay (ms)
          Helps to get the video output and the light effects in sync. Values
          around 20ms should do the trick.
   Change channel assignment (fixes wrong wiring):
      --atmo-channel_0 {-1 (disabled), 4 (Zone 4:summary), 3 (Zone 3:left), 1 (Zone 1:right), 0 (Zone 0:top), 2 (Zone 2:bottom)} 
                                 Channel 0: summary
          Maps the hardware channel X to logical zone Y to fix wrong wiring :-)
      --atmo-channel_1 {-1 (disabled), 4 (Zone 4:summary), 3 (Zone 3:left), 1 (Zone 1:right), 0 (Zone 0:top), 2 (Zone 2:bottom)} 
                                 Channel 1: left
          Maps the hardware channel X to logical zone Y to fix wrong wiring :-)
      --atmo-channel_2 {-1 (disabled), 4 (Zone 4:summary), 3 (Zone 3:left), 1 (Zone 1:right), 0 (Zone 0:top), 2 (Zone 2:bottom)} 
                                 Channel 2: right
          Maps the hardware channel X to logical zone Y to fix wrong wiring :-)
      --atmo-channel_3 {-1 (disabled), 4 (Zone 4:summary), 3 (Zone 3:left), 1 (Zone 1:right), 0 (Zone 0:top), 2 (Zone 2:bottom)} 
                                 Channel 3: top
          Maps the hardware channel X to logical zone Y to fix wrong wiring :-)
      --atmo-channel_4 {-1 (disabled), 4 (Zone 4:summary), 3 (Zone 3:left), 1 (Zone 1:right), 0 (Zone 0:top), 2 (Zone 2:bottom)} 
                                 Channel 4: bottom
          Maps the hardware channel X to logical zone Y to fix wrong wiring :-)
      --atmo-channels <string>   Channel / Zone Assignment
          for devices with more than five channels / zones write down here for
          each channel the zone number to show and separate the values with ,
          or ; and use -1 to not use some channels. For the classic AtmoLight
          the sequence 4,3,1,0,2 would set the default channel/zone mapping.
          Having only two zones on top, and one zone on left and right and no
          summary zone the mapping for classic AtmoLight would be -1,3,2,1,0
   Adjust the white light to your LED stripes:
      --atmo-whiteadj, --no-atmo-whiteadj 
                                 Use Software White adjust (default enabled)
          Should the buildin driver do a white adjust or your LED stripes?
          recommend. (default enabled)
      --atmo-white-red <integer [0 .. 255]> 
                                 White Red
          Red value of a pure white on your LED stripes.
      --atmo-white-green <integer [0 .. 255]> 
                                 White Green
          Green value of a pure white on your LED stripes.
      --atmo-white-blue <integer [0 .. 255]> 
                                 White Blue
          Blue value of a pure white on your LED stripes.
   Change gradients:
      --atmo-gradient_zone_0 <string> 
                                 Zone 0: Top gradient
          Defines a small bitmap with 64x48 pixels, containing a greyscale
          gradient
      --atmo-gradient_zone_1 <string> 
                                 Zone 1: Right gradient
          Defines a small bitmap with 64x48 pixels, containing a greyscale
          gradient
      --atmo-gradient_zone_2 <string> 
                                 Zone 2: Bottom gradient
          Defines a small bitmap with 64x48 pixels, containing a greyscale
          gradient
      --atmo-gradient_zone_3 <string> 
                                 Zone 3: Left gradient
          Defines a small bitmap with 64x48 pixels, containing a greyscale
          gradient
      --atmo-gradient_zone_4 <string> 
                                 Zone 4: Summary gradient
          Defines a small bitmap with 64x48 pixels, containing a greyscale
          gradient
      --atmo-gradient_path <string> 
                                 Gradient bitmap searchpath
          Now preferred option to assign gradient bitmaps, put them as
          zone_0.bmp, zone_1.bmp etc. into one folder and set the foldername
          here
      --atmo-width <integer [64 .. 512]> 
                                 Extracted Image Width
          The width of the mini image for further processing (64 is default)
      --atmo-height <integer [48 .. 384]> 
                                 Extracted Image Height
          The height of the mini image for further processing (48 is default)
      --atmo-showdots, --no-atmo-showdots 
                                 Mark analysed pixels (default disabled)
          makes the sample grid visible on screen as white pixels (default
          disabled)

 Remote-OSD over VNC (remoteosd)
      --rmtosd-host <string>     VNC Host
          VNC hostname or IP address.
      --rmtosd-port <integer [1 .. 65535]> 
                                 VNC Port
          VNC port number.
      --rmtosd-password <string> VNC Password
          VNC password.
      --rmtosd-update <integer [200 .. 300]> 
                                 VNC poll interval
          In this interval an update from VNC is requested, default every 300
          ms. 
      --rmtosd-vnc-polling, --no-rmtosd-vnc-polling 
                                 VNC polling (default disabled)
          Activate VNC polling. Do NOT activate for use as VDR ffnetdev client.
          (default disabled)
      --rmtosd-mouse-events, --no-rmtosd-mouse-events 
                                 Mouse events (default disabled)
          Send mouse events to VNC host. Not needed for use as VDR ffnetdev
          client. (default disabled)
      --rmtosd-key-events, --no-rmtosd-key-events 
                                 Key events (default disabled)
          Send key events to VNC host. (default disabled)
      --rmtosd-alpha <integer [0 .. 255]> 
                                 Alpha transparency value (default 255)
          The transparency of the OSD VNC can be changed by giving a value
          between 0 and 255. A lower value specifies more transparency a higher
          means less transparency. The default is being not transparent (value
          255) the minimum is fully transparent (value 0).

 Subtitle delay (subsdelay)
 Change subtitle delay
      --subsdelay-mode {0 (Absolute delay), 1 (Relative to source delay), 2 (Relative to source content)} 
                                 Delay calculation mode
          Absolute delay - add absolute delay to each subtitle. Relative to
          source delay - multiply subtitle delay. Relative to source content -
          determine subtitle delay from its content (text).
      --subsdelay-factor <float [0.000000 .. 20.000000]> 
                                 Calculation factor
          Calculation factor. In Absolute delay mode the factor represents
          seconds.
      --subsdelay-overlap <integer [1 .. 4]> 
                                 Maximum overlapping subtitles
          Maximum number of subtitles allowed at the same time.
      --subsdelay-min-alpha <integer [0 .. 255]> 
                                 Minimum alpha value
          Alpha value of the earliest subtitle, where 0 is fully transparent
          and 255 is fully opaque.
   Overlap fix:
      --subsdelay-min-stops <integer [-2147483648 .. 2147483647]> 
                                 Interval between two disappearances
          Minimum time (in milliseconds) that subtitle should stay after its
          predecessor has disappeared (subtitle delay will be extended to meet
          this requirement).
      --subsdelay-min-start-stop <integer [-2147483648 .. 2147483647]> 
                                 Interval between appearance and disappearance
          Minimum time (in milliseconds) that subtitle should stay after newer
          subtitle has appeared (earlier subtitle delay will be shortened to
          avoid the overlap).
      --subsdelay-min-stop-start <integer [-2147483648 .. 2147483647]> 
                                 Interval between disappearance and appearance
          Minimum time (in milliseconds) between subtitle disappearance and
          newer subtitle appearance (earlier subtitle delay will be extended to
          fill the gap).

 Grain video filter (grain)
 Adds filtered gaussian noise
      --grain-variance <float [0.000000 .. 10.000000]> 
                                 Variance
          Variance of the gaussian noise
      --grain-period-min <integer [1 .. 64]> 
                                 Minimal period
          Minimal period of the noise grain in pixel
      --grain-period-max <integer [1 .. 64]> 
                                 Maximal period
          Maximal period of the noise grain in pixel

 Convert 3D picture to anaglyph image video filter (anaglyph)
      --anaglyph-scheme {red-green,red-blue,red-cyan,trioscopic,magenta-cyan} 
                                 Colour scheme
          Define the glasses' colour scheme

 Blending benchmark filter (blendbench)
   Benchmarking:
      --blendbench-loops <integer [-2147483648 .. 2147483647]> 
                                 Number of time to blend
          The number of time the blend will be performed
      --blendbench-alpha <integer [0 .. 255]> 
                                 Alpha of the blended image
          Alpha with which the blend image is blended
   Base image:
      --blendbench-base-image <string> 
                                 Image to be blended onto
          The image which will be used to blend onto
      --blendbench-base-chroma <string> 
                                 Chroma for the base image
          Chroma which the base image will be loaded in
   Blend image:
      --blendbench-blend-image <string> 
                                 Image which will be blended
          The image blended onto the base image
      --blendbench-blend-chroma <string> 
                                 Chroma for the blend image
          Chroma which the blend image will be loaded in

 Audio Bar Graph Video sub source (audiobargraph_v)
      --audiobargraph_v-x <integer [-2147483648 .. 2147483647]> 
                                 X coordinate
          X coordinate of the bargraph.
      --audiobargraph_v-y <integer [-2147483648 .. 2147483647]> 
                                 Y coordinate
          Y coordinate of the bargraph.
      --audiobargraph_v-transparency <integer [0 .. 255]> 
                                 Transparency of the bargraph
          Bargraph transparency value (from 0 for full transparency to 255 for
          full opacity).
      --audiobargraph_v-position {0 (Centre), 1 (Left), 2 (Right), 4 (Top), 8 (Bottom), 5 (Top-Left), 6 (Top-Right), 9 (Bottom-Left), 10 (Bottom-Right)} 
                                 Bargraph position
          Enforce the bargraph position on the video (0=center, 1=left,
          2=right, 4=top, 8=bottom, you can also use combinations of these
          values, eg 6 = top-right).
      --audiobargraph_v-barWidth <integer [-2147483648 .. 2147483647]> 
                                 Bar width in pixel (default : 10)
          Width in pixel of each bar in the BarGraph to be displayed (default :
          10).

 Ball video filter (ball)
 Augmented reality ball game
      --ball-color {red,green,blue,white} 
                                 Ball colour
          Ball colour
      --ball-speed <integer [1 .. 15]> 
                                 Ball speed
          Set ball speed, the displacement value                               
           in number of pixels by frame.
      --ball-size <integer [5 .. 30]> 
                                 Ball size
          Set ball size giving its radius in number                            
              of pixels
      --ball-gradient-threshold <integer [1 .. 200]> 
                                 Gradient threshold
          Set gradient threshold for edge computation.
      --ball-edge-visible, --no-ball-edge-visible 
                                 Edge visible (default enabled)
          Set edge visibility. (default enabled)

 Mirror video filter (mirror)
 Splits video in two same parts, like in a mirror
      --mirror-split {0 (Vertical), 1 (Horizontal)} 
                                 Mirror orientation
          Defines orientation of the mirror splitting.     Can be vertical or
          horizontal
      --mirror-direction {0 (Left to right/Top to bottom), 1 (Right to left/Bottom to top)} 
                                 Direction
          Direction of the mirroring

 Video post processing filter (postproc)
      --postproc-q <integer [0 .. 6]> 
                                 Post processing quality
          Quality of post processing. Valid range is 0 (disabled) to 6
          (highest) Higher levels require more CPU power, but produce higher
          quality pictures. With default filter chain, the values map to the
          following filters: 1: hb, 2-4: hb+vb, 5-6: hb+vb+dr
      --postproc-name <string>   FFmpeg post processing filter chains
          FFmpeg post processing filter chains

 Logo sub source (logo)
 Use a local picture as logo on the video
      --logo-file <string>       Logo filenames
          Full path of the image files to use. Format is <image>[,<delay in
          ms>[,<alpha>]][;<image>[,<delay>[,<alpha>]]][;...]. If you only have
          one file, simply enter its filename.
      --logo-x <integer [-2147483648 .. 2147483647]> 
                                 X coordinate
          X coordinate of the logo. You can move the logo by left-clicking it.
      --logo-y <integer [-2147483648 .. 2147483647]> 
                                 Y coordinate
          Y coordinate of the logo. You can move the logo by left-clicking it.
      --logo-delay <integer [-2147483648 .. 2147483647]> 
                                 Logo individual image time in ms
          Individual image display time of 0 - 60000 ms.
      --logo-repeat <integer [-2147483648 .. 2147483647]> 
                                 Logo animation # of loops
          Number of loops for the logo animation.-1 = continuous, 0 = disabled
      --logo-opacity <integer [0 .. 255]> 
                                 Opacity of the logo
          Logo opacity value (from 0 for full transparency to 255 for full
          opacity).
      --logo-position {0 (Centre), 1 (Left), 2 (Right), 4 (Top), 8 (Bottom), 5 (Top-Left), 6 (Top-Right), 9 (Bottom-Left), 10 (Bottom-Right)} 
                                 Logo position
          Enforce the logo position on the video (0=center, 1=left, 2=right,
          4=top, 8=bottom, you can also use combinations of these values, eg 6
          = top-right).

 Video transformation filter (transform)
 Rotate or flip the video
      --transform-type {90,180,270,hflip,vflip,transpose,antitranspose} 
                                 Transform type
          Transform type

 High Quality 3D Denoiser filter (hqdn3d)
      --hqdn3d-luma-spat <float [0.000000 .. 254.000000]> 
                                 Spatial luma strength (0-254)
          Spatial luma strength (0-254)
      --hqdn3d-chroma-spat <float [0.000000 .. 254.000000]> 
                                 Spatial chroma strength (0-254)
          Spatial chroma strength (0-254)
      --hqdn3d-luma-temp <float [0.000000 .. 254.000000]> 
                                 Temporal luma strength (0-254)
          Temporal luma strength (0-254)
      --hqdn3d-chroma-temp <float [0.000000 .. 254.000000]> 
                                 Temporal chroma strength (0-254)
          Temporal chroma strength (0-254)

 Puzzle interactive game video filter (puzzle)
      --puzzle-rows <integer [2 .. 16]> 
                                 Number of puzzle rows
          Number of puzzle rows
      --puzzle-cols <integer [2 .. 16]> 
                                 Number of puzzle columns
          Number of puzzle columns
      --puzzle-border <integer [0 .. 40]> 
                                 Border
          Unshuffled Border width.
      --puzzle-preview, --no-puzzle-preview 
                                 Small preview (default disabled)
          Show small preview. (default disabled)
      --puzzle-preview-size <integer [0 .. 100]> 
                                 Small preview size
          Show small preview size (percent of source).
      --puzzle-shape-size <integer [0 .. 100]> 
                                 Piece edge shape size
          Size of the curve along the piece's edge
      --puzzle-auto-shuffle <integer [0 .. 30000]> 
                                 Auto shuffle
          Auto shuffle delay during game
      --puzzle-auto-solve <integer [0 .. 30000]> 
                                 Auto solve
          Auto solve delay during game
      --puzzle-rotation {0 (0), 1 (0/180), 2 (0/90/180/270), 3 (0/90/180/270/mirror)} 
                                 Rotation
          Rotation parameter: none;180;90-270;mirror
      --puzzle-mode {0 (jigsaw puzzle), 1 (sliding puzzle), 2 (swap puzzle), 3 (exchange puzzle)} 
                                 Game mode
          Select game mode variation from jigsaw puzzle to sliding puzzle.

 Rotate video filter (rotate)
      --rotate-angle <float>     Angle in degrees
          Angle in degrees (0 to 359)
      --rotate-use-motion, --no-rotate-use-motion 
                                 Use motion sensors (default disabled)
          Use HDAPS, AMS, APPLESMC or UNIMOTION motion sensors to rotate the
          video (default disabled)

 Gradient video filter (gradient)
 Apply colour gradient or edge detection effects
      --gradient-mode {gradient,edge,hough} 
                                 Distort mode
          Distort mode, one of "gradient", "edge" and "hough".
      --gradient-type <integer [0 .. 1]> 
                                 Gradient image type
          Gradient image type (0 or 1). 0 will turn the image to white while 1
          will keep colours.
      --gradient-cartoon, --no-gradient-cartoon 
                                 Apply cartoon effect (default enabled)
          Apply cartoon effect. It is only used by "gradient" and "edge".
          (default enabled)

 Bluescreen video filter (bluescreen)
 This effect, also known as "greenscreen" or "chroma key" blends the "blue parts" of the foreground image of the mosaic on the background (like weather forecasts). You can choose the "key" colour for blending (blue by default).
      --bluescreen-u <integer [0 .. 255]> 
                                 Bluescreen U value
          "U" value for the bluescreen key colour (in YUV values). From 0 to
          255. Defaults to 120 for blue.
      --bluescreen-v <integer [0 .. 255]> 
                                 Bluescreen V value
          "V" value for the bluescreen key colour (in YUV values). From 0 to
          255. Defaults to 90 for blue.
      --bluescreen-ut <integer [0 .. 255]> 
                                 Bluescreen U tolerance
          Tolerance of the bluescreen blender on colour variations for the U
          plane. A value between 10 and 20 seems sensible.
      --bluescreen-vt <integer [0 .. 255]> 
                                 Bluescreen V tolerance
          Tolerance of the bluescreen blender on colour variations for the V
          plane. A value between 10 and 20 seems sensible.

 HTTP Live streaming output (access_output_livehttp)
      --sout-livehttp-seglen <integer [-2147483648 .. 2147483647]> 
                                 Segment length
          Length of TS stream segments
      --sout-livehttp-numsegs <integer [-2147483648 .. 2147483647]> 
                                 Number of segments
          Number of segments to include in index
      --sout-livehttp-initial-segment-number <integer [-2147483648 .. 2147483647]> 
                                 Number of first segment
          The number of the first segment generated
      --sout-livehttp-splitanywhere, --no-sout-livehttp-splitanywhere 
                                 Split segments anywhere (default disabled)
          Don't require a keyframe before splitting a segment. Needed for audio
          only. (default disabled)
      --sout-livehttp-delsegs, --no-sout-livehttp-delsegs 
                                 Delete segments (default enabled)
          Delete segments when they are no longer needed (default enabled)
      --sout-livehttp-ratecontrol, --no-sout-livehttp-ratecontrol 
                                 Use muxers rate control mechanism (default
                                 disabled)
          Use muxers rate control mechanism (default disabled)
      --sout-livehttp-caching, --no-sout-livehttp-caching 
                                 Allow cache (default disabled)
          Add EXT-X-ALLOW-CACHE:NO directive in playlist-file if this is
          disabled (default disabled)
      --sout-livehttp-generate-iv, --no-sout-livehttp-generate-iv 
                                 Use randomised IV for encryption (default
                                 disabled)
          Generate IV instead using segment-number as IV (default disabled)
      --sout-livehttp-index <string> 
                                 Index file
          Path to the index file to create
      --sout-livehttp-index-url <string> 
                                 Full URL to put in index file
          Full URL to put in index file. Use #'s to represent segment number
      --sout-livehttp-key-uri <string> 
                                 AES key URI to place in playlist
          AES key URI to place in playlist
      --sout-livehttp-key-file <string> 
                                 AES key file
          File containing the 16 bytes encryption key
      --sout-livehttp-key-loadfile <string> 
                                 File where vlc reads key-uri and
                                 keyfile-location
          File is read when segment starts and is assumet to be in format:
          key-uri\nkey-file. File is read on the segment opening and values are
          used on that segment.

 IceCAST output (access_output_shout)
      --sout-shout-name <string> Stream name
          Name to give to this stream/channel on the shoutcast/icecast server.
      --sout-shout-description <string> 
                                 Stream description
          Description of the stream content or information about your channel.
      --sout-shout-mp3, --no-sout-shout-mp3 
                                 Stream MP3 (default disabled)
          You normally have to feed the shoutcast module with Ogg streams. It
          is also possible to stream MP3 instead, so you can forward MP3
          streams to the shoutcast/icecast server. (default disabled)
      --sout-shout-genre <string> 
                                 Genre description
          Genre of the content. 
      --sout-shout-url <string>  URL description
          URL with information about the stream or your channel. 
      --sout-shout-bitrate <string> 
                                 Bitrate
          Bitrate information of the transcoded stream. 
      --sout-shout-samplerate <string> 
                                 Samplerate
          Samplerate information of the transcoded stream. 
      --sout-shout-channels <string> 
                                 Number of channels
          Number of channels information of the transcoded stream. 
      --sout-shout-quality <string> 
                                 Ogg Vorbis Quality
          Ogg Vorbis Quality information of the transcoded stream. 
      --sout-shout-public, --no-sout-shout-public 
                                 Stream public (default disabled)
          Make the server publicly available on the 'Yellow Pages' (directory
          listing of streams) on the icecast/shoutcast website. Requires the
          bitrate information specified for shoutcast. Requires Ogg streaming
          for icecast. (default disabled)

 File stream output (access_output_file)
      --sout-file-overwrite, --no-sout-file-overwrite 
                                 Overwrite existing file (default enabled)
          If the file already exists, it will be overwritten. (default enabled)
      --sout-file-append, --no-sout-file-append 
                                 Append to file (default disabled)
          Append to file if it exists instead of replacing it. (default
          disabled)
      --sout-file-format, --no-sout-file-format 
                                 Format time and date (default disabled)
          Perform ISO C time and date formatting on the file path (default
          disabled)
      --sout-file-sync, --no-sout-file-sync 
                                 Synchronous writing (default disabled)
          Open the file with synchronous writing. (default disabled)

 UDP stream output (udp)
      --sout-udp-caching <integer [-2147483648 .. 2147483647]> 
                                 Caching value (ms)
          Default caching value for outbound UDP streams. This value should be
          set in milliseconds.
      --sout-udp-group <integer [-2147483648 .. 2147483647]> 
                                 Group packets
          Packets can be sent one by one at the right time or by groups. You
          can choose the number of packets that will be sent at a time. It
          helps reducing the scheduling load on heavily-loaded systems.

 HTTP stream output (access_output_http)
      --sout-http-user <string>  Username
          User name that will be requested to access the stream.
      --sout-http-pwd <string>   Password
          Password that will be requested to access the stream.
      --sout-http-mime <string>  Mime
          MIME returned by the server (autodetected if not specified).
      --sout-http-metacube, --no-sout-http-metacube 
                                 Metacube (default disabled)
          Use the Metacube protocol. Needed for streaming to the Cubemap
          reflector. (default disabled)

 3D OpenGL spectrum visualization (glspectrum)
      --glspectrum-width <integer [-2147483648 .. 2147483647]> 
                                 Video width
          The width of the visualization window, in pixels.
      --glspectrum-height <integer [-2147483648 .. 2147483647]> 
                                 Video height
          The height of the visualization window, in pixels.

 Visualiser filter (visual)
   General:
      --effect-list <string>     Effects list
          A list of visual effect, separated by commas. Current effects
          include: dummy, scope, spectrum, spectrometer and vuMeter.
      --effect-width <integer [-2147483648 .. 2147483647]> 
                                 Video width
          The width of the effects video window, in pixels.
      --effect-height <integer [-2147483648 .. 2147483647]> 
                                 Video height
          The height of the effects video window, in pixels.
      --effect-fft-window {none,hann,flattop,blackmanharris,kaiser} 
                                 FFT window
          The type of FFT window to use for spectrum-based visualizations.
      --effect-kaiser-param <float> 
                                 Kaiser window parameter
          The parameter alpha for the Kaiser window. Increasing alpha increases
          the main-lobe width and decreases the side-lobe amplitude. 
   Spectrum analyser:
      --visual-80-bands, --no-visual-80-bands 
                                 Show 80 bands instead of 20 (default enabled)
          Show 80 bands instead of 20 (default enabled)
      --visual-peaks, --no-visual-peaks 
                                 Draw peaks in the analyser (default enabled)
          Draw peaks in the analyser (default enabled)
   Spectrometer:
      --spect-show-original, --no-spect-show-original 
                                 Enable original graphic spectrum (default
                                 disabled)
          Enable the "flat" spectrum analyser in the spectrometer. (default
          disabled)
      --spect-show-base, --no-spect-show-base 
                                 Draw the base of the bands (default enabled)
          Draw the base of the bands (default enabled)
      --spect-radius <integer [-2147483648 .. 2147483647]> 
                                 Base pixel radius
          Defines radius size in pixels, of base of bands(beginning).
      --spect-sections <integer [1 .. 2147483647]> 
                                 Spectral sections
          Determines how many sections of spectrum will exist.
      --spect-color <integer [-2147483648 .. 2147483647]> 
                                 V-plane colour
          YUV-Colour cube shifting across the V-plane ( 0 - 127 ).
      --spect-show-bands, --no-spect-show-bands 
                                 Draw bands in the spectrometer (default
                                 enabled)
          Draw bands in the spectrometer (default enabled)
      --spect-80-bands, --no-spect-80-bands 
                                 Show 80 bands instead of 20 (default enabled)
          Show 80 bands instead of 20 (default enabled)
      --spect-separ <integer [-2147483648 .. 2147483647]> 
                                 Number of blank pixels between bands.
          Number of blank pixels between bands.
      --spect-amp <integer [-2147483648 .. 2147483647]> 
                                 Amplification
          This is a coefficient that modifies the height of the bands.
      --spect-show-peaks, --no-spect-show-peaks 
                                 Draw peaks in the analyser (default enabled)
          Draw peaks in the analyser (default enabled)
      --spect-peak-width <integer [-2147483648 .. 2147483647]> 
                                 Peak extra width
          Additions or subtractions of pixels on the peak width.
      --spect-peak-height <integer [-2147483648 .. 2147483647]> 
                                 Peak height
          Total pixel height of the peak items.

 Freetype2 font renderer (freetype)
      --freetype-font <string>   Font
          Font family for the font you want to use
      --freetype-monofont <string> 
                                 Monospace Font
          Font family for the font you want to use
      --freetype-fontsize <integer [0 .. 4096]> 
                                 Font size in pixels
          This is the default size of the fonts that will be rendered on the
          video. If set to something different than 0 this option will override
          the relative font size.
      --freetype-rel-fontsize {20 (Smaller), 18 (Small), 16 (Normal), 12 (Large), 6 (Larger)} 
                                 Relative font size
          This is the relative default size of the fonts that will be rendered
          on the video. If absolute font size is set, relative size will be
          overridden.
      --freetype-opacity <integer [0 .. 255]> 
                                 Text opacity
          The opacity (inverse of transparency) of the text that will be
          rendered on the video. 0 = transparent, 255 = totally opaque. 
      --freetype-color {0 (Black), 8421504 (Grey), 12632256 (Silver), 16777215 (White), 8388608 (Maroon), 16711680 (Red), 16711935 (Fuchsia), 16776960 (Yellow), 8421376 (Olive), 32768 (Green), 32896 (Teal), 65280 (Lime), 8388736 (Purple), 128 (Navy), 255 (Blue), 65535 (Aqua)} 
                                 Text default colour
          The colour of the text that will be rendered on the video. This must
          be an hexadecimal (like HTML colors). The first two chars are for
          red, then green, then blue. #000000 = black, #FF0000 = red, #00FF00 =
          green, #FFFF00 = yellow (red + green), #FFFFFF = white
      --freetype-bold, --no-freetype-bold 
                                 Force bold (default disabled)
      --freetype-background-opacity <integer [0 .. 255]> 
                                 Background opacity
      --freetype-background-color {0 (Black), 8421504 (Grey), 12632256 (Silver), 16777215 (White), 8388608 (Maroon), 16711680 (Red), 16711935 (Fuchsia), 16776960 (Yellow), 8421376 (Olive), 32768 (Green), 32896 (Teal), 65280 (Lime), 8388736 (Purple), 128 (Navy), 255 (Blue), 65535 (Aqua)} 
                                 Background colour
      --freetype-outline-opacity <integer [0 .. 255]> 
                                 Outline opacity
      --freetype-outline-color {0 (Black), 8421504 (Grey), 12632256 (Silver), 16777215 (White), 8388608 (Maroon), 16711680 (Red), 16711935 (Fuchsia), 16776960 (Yellow), 8421376 (Olive), 32768 (Green), 32896 (Teal), 65280 (Lime), 8388736 (Purple), 128 (Navy), 255 (Blue), 65535 (Aqua)} 
                                 Outline colour
      --freetype-outline-thickness {0 (None), 2 (Thin), 4 (Normal), 6 (Thick)} 
                                 Outline thickness
      --freetype-shadow-opacity <integer [0 .. 255]> 
                                 Shadow opacity
      --freetype-shadow-color {0 (Black), 8421504 (Grey), 12632256 (Silver), 16777215 (White), 8388608 (Maroon), 16711680 (Red), 16711935 (Fuchsia), 16776960 (Yellow), 8421376 (Olive), 32768 (Green), 32896 (Teal), 65280 (Lime), 8388736 (Purple), 128 (Navy), 255 (Blue), 65535 (Aqua)} 
                                 Shadow colour
      --freetype-shadow-angle <float [-360.000000 .. 360.000000]> 
                                 Shadow angle
      --freetype-shadow-distance <float [0.000000 .. 1.000000]> 
                                 Shadow distance
      --freetype-yuvp, --no-freetype-yuvp 
                                 Use YUVP renderer (default disabled)
          This renders the font using "paletized YUV". This option is only
          needed if you want to encode into DVB subtitles (default disabled)

 VDPAU surface conversions (vdpau_chroma)
      --vdpau-deinterlace {-1 (Bob), 0 (Temporal), 1 (Temporal-spatial)} 
                                 Deinterlace
          Deinterlacing algorithm
      --vdpau-ivtc, --no-vdpau-ivtc 
                                 Inverse telecine (default disabled)
          Inverse telecine (default disabled)
      --vdpau-chroma-skip, --no-vdpau-chroma-skip 
                                 Deinterlace chroma skip (default disabled)
          Whether temporal deinterlacing applies to luma only (default
          disabled)
      --vdpau-noise-reduction <float [0.000000 .. 1.000000]> 
                                 Noise reduction level
          Noise reduction level
      --vdpau-scaling <integer [0 .. 9]> 
                                 Scaling quality
          High quality scaling level

 Text subtitle parser (subtitle)
      --sub-fps <float>          Frames per Second
          Override the normal frames per second settings. This will only work
          with MicroDVD and SubRIP (SRT) subtitles.
      --sub-delay <integer [-2147483648 .. 2147483647]> 
                                 Subtitle delay
          Apply a delay to all subtitles (in 1/10s, eg 100 means 10s).
      --sub-type {auto,microdvd,subrip,subviewer,ssa1,ssa2-4,ass,vplayer,sami,dvdsubtitle,mpl2,aqt,pjs,mpsub,jacosub,psb,realtext,dks,subviewer1,vtt} 
                                 Subtitle format
          Force the subtiles format. Selecting "auto" means autodetection and
          should always work.
      --sub-description <string> Subtitle description
          Override the default track description.

 MPEG Transport Stream demuxer (ts)
      --ts-extra-pmt <string>    Extra PMT
          Allows a user to specify an extra pmt
          (pmt_pid=pid:stream_type[,...]).
      --ts-trust-pcr, --no-ts-trust-pcr 
                                 Trust in-stream PCR (default enabled)
          Use the stream PCR as a reference. (default enabled)
      --ts-es-id-pid, --no-ts-es-id-pid 
                                 Set id of ES to PID (default enabled)
          Set the internal ID of each elementary stream handled by VLC to the
          same value as the PID in the TS stream, instead of 1, 2, 3, etc.
          Useful to do '#duplicate{..., select="es=<pid>"}'. (default enabled)
      --ts-csa-ck <string>       CSA Key
          CSA encryption key. This must be a 16 char string (8 hexadecimal
          bytes).
      --ts-csa2-ck <string>      Second CSA Key
          The even CSA encryption key. This must be a 16 char string (8
          hexadecimal bytes).
      --ts-csa-pkt <integer [-2147483648 .. 2147483647]> 
                                 Packet size in bytes to decrypt
          Specify the size of the TS packet to decrypt. The decryption routines
          subtract the TS-header from the value before decrypting. 
      --ts-split-es, --no-ts-split-es 
                                 Separate sub-streams (default enabled)
          Separate teletex/dvbs pages into independent ES. It can be useful to
          turn off this option when using stream output. (default enabled)
      --ts-seek-percent, --no-ts-seek-percent 
                                 Seek based on percent not time (default
                                 disabled)
          Seek and position based on a percent byte position, not a PCR
          generated time position. If seeking doesn't work property, turn on
          this option. (default disabled)

 VC1 video demuxer (vc1)
      --vc1-fps <float>          Frames per Second
          Desired frame rate for the VC-1 stream.

 MOD demuxer (libmodplug) (mod)
      --mod-noisereduction, --no-mod-noisereduction 
                                 Noise reduction (default enabled)
          Enable noise reduction algorithm. (default enabled)
      --mod-reverb, --no-mod-reverb 
                                 Reverb (default disabled)
          Enable reverberation (default disabled)
      --mod-reverb-level <integer [0 .. 100]> 
                                 Reverberation level
          Reverberation level (from 0 to 100, default value is 0).
      --mod-reverb-delay <integer [0 .. 1000]> 
                                 Reverberation delay
          Reverberation delay, in ms. Usual values are from to 40 to 200ms.
      --mod-megabass, --no-mod-megabass 
                                 Mega bass (default disabled)
          Enable megabass mode (default disabled)
      --mod-megabass-level <integer [0 .. 100]> 
                                 Mega bass level
          Megabass mode level (from 0 to 100, default value is 0).
      --mod-megabass-range <integer [10 .. 100]> 
                                 Mega bass cutoff
          Megabass mode cutoff frequency, in Hz. This is the maximum frequency
          for which the megabass effect applies. Valid values are from 10 to
          100 Hz.
      --mod-surround, --no-mod-surround 
                                 Surround (default disabled)
          Surround (default disabled)
      --mod-surround-level <integer [0 .. 100]> 
                                 Surround level
          Surround effect level (from 0 to 100, default value is 0).
      --mod-surround-delay <integer [0 .. 1000]> 
                                 Surround delay (ms)
          Surround delay, in ms. Usual values are from 5 to 40 ms.

 Matroska stream demuxer (mkv)
      --mkv-use-ordered-chapters, --no-mkv-use-ordered-chapters 
                                 Respect ordered chapters (default enabled)
          Play chapters in the order specified in the segment. (default
          enabled)
      --mkv-use-chapter-codec, --no-mkv-use-chapter-codec 
                                 Chapter codecs (default enabled)
          Use chapter codecs found in the segment. (default enabled)
      --mkv-preload-local-dir, --no-mkv-preload-local-dir 
                                 Preload MKV files in the same directory
                                 (default enabled)
          Preload matroska files in the same directory to find linked segments
          (not good for broken files). (default enabled)
      --mkv-seek-percent, --no-mkv-seek-percent 
                                 Seek based on percent not time (default
                                 disabled)
          Seek based on percent not time. (default disabled)
      --mkv-use-dummy, --no-mkv-use-dummy 
                                 Dummy Elements (default disabled)
          Read and discard unknown EBML elements (not good for broken files).
          (default disabled)

 Avformat demuxer (avformat)
   Demuxer:
      --avformat-format <string> Format name
          Internal libavcodec format name
      --avformat-options <string> 
                                 Advanced options
          Advanced options, in the form {opt=val,opt2=val2}.
   Muxer:
      --sout-avformat-mux <string> 
                                 Avformat mux
          Force use of a specific avformat muxer.
      --sout-avformat-options <string> 
                                 Advanced options
          Advanced options, in the form {opt=val,opt2=val2}.

 DV (Digital Video) demuxer (rawdv)
      --rawdv-hurry-up, --no-rawdv-hurry-up 
                                 Hurry up (default disabled)
          The demuxer will advance timestamps if the input can't keep up with
          the rate. (default disabled)

 H264 video demuxer (h264)
      --h264-fps <float>         Frames per Second
          Desired frame rate for the H264 stream.

 File dumper (demuxdump)
      --demuxdump-access <string> 
                                 Dump module
          Dump module
      --demuxdump-file <string>  Dump filename
          Name of the file to which the raw stream will be dumped.
      --demuxdump-append, --no-demuxdump-append 
                                 Append to existing file (default disabled)
          If the file already exists, it will not be overwritten. (default
          disabled)

 M-JPEG camera demuxer (mjpeg)
      --mjpeg-fps <float>        Frames per Second
          This is the desired frame rate when playing MJPEG from a file. Use 0
          (this is the default value) for a live stream (from a camera).

 Image demuxer (image)
      --image-id <integer [-2147483648 .. 2147483647]> 
                                 ES ID
          Set the ID of the elementary stream
      --image-group <integer [-2147483648 .. 2147483647]> 
                                 Group
          Set the group of the elementary stream
      --image-decode, --no-image-decode 
                                 Decode (default enabled)
          Decode at the demuxer stage (default enabled)
      --image-chroma <string>    Forced chroma
          If non empty and image-decode is true, the image will be converted to
          the specified chroma.
      --image-duration <float>   Duration in seconds
          Duration in seconds before simulating an end of file. A negative
          value means an unlimited play time.
      --image-fps <string>       Frame rate
          Frame rate of the elementary stream produced.
      --image-realtime, --no-image-realtime 
                                 Real-time (default disabled)
          Use real-time mode suitable for being used as a master input and
          real-time input slaves. (default disabled)

 Raw audio demuxer (rawaud)
      --rawaud-channels <integer [-2147483648 .. 2147483647]> 
                                 Audio channels
          Audio channels in input stream. Numeric value >0. Default is 2.
      --rawaud-samplerate <integer [-2147483648 .. 2147483647]> 
                                 Audio samplerate (Hz)
          Audio sample rate in Hertz. Default is 48000 Hz.
      --rawaud-fourcc <string>   FOURCC code of raw input format
          FOURCC code of the raw input format. This is a four character string.
      --rawaud-lang <string>     Forces the audio language
          Forces the audio language for the output mux. Three letter ISO639
          code. Default is 'eng'. 

 AVI demuxer (avi)
      --avi-interleaved, --no-avi-interleaved 
                                 Force interleaved method (default disabled)
          Force interleaved method (default disabled)
      --avi-index {0 (Ask for action), 1 (Always fix), 2 (Never fix), 3 (Fix when necessary)} 
                                 Force index creation
          Recreate a index for the AVI file. Use this if your AVI file is
          damaged or incomplete (not seekable).

 MPEG-I/II/4 / A52 / DTS / MLP audio (es)
      --es-fps <float>           Frames per Second
          This is the frame rate used as a fallback when playing MPEG video
          elementary streams.

 HEVC/H.265 video demuxer (hevc)
      --hevc-force-fps <float>   Frames per Second
          Desired frame rate for the stream.

 Playlist (playlist)
      --playlist-skip-ads, --no-playlist-skip-ads 
                                 Skip ads (default enabled)
          Use playlist options usually used to prevent ads skipping to detect
          ads and prevent adding them to the playlist. (default enabled)
      --shoutcast-show-adult, --no-shoutcast-show-adult 
                                 Show shoutcast adult content (default
                                 disabled)
          Show NC17 rated video streams when using shoutcast video playlists.
          (default disabled)

 MPEG-PS demuxer (ps)
      --ps-trust-timestamps, --no-ps-trust-timestamps 
                                 Trust MPEG timestamps (default enabled)
          Normally we use the timestamps of the MPEG files to calculate
          position and duration. However sometimes this might not be usable.
          Disable this option to calculate from the bitrate instead. (default
          enabled)

 Raw video demuxer (rawvid)
      --rawvid-fps <string>      Frames per Second
          This is the desired frame rate when playing raw video streams. In the
          form 30000/1001 or 29.97
      --rawvid-width <integer [-2147483648 .. 2147483647]> 
                                 Width
          This specifies the width in pixels of the raw video stream.
      --rawvid-height <integer [-2147483648 .. 2147483647]> 
                                 Height
          This specifies the height in pixels of the raw video stream.
      --rawvid-chroma <string>   Force chroma (Use carefully)
          Force chroma. This is a four character string.
      --rawvid-aspect-ratio <string> 
                                 Aspect ratio
          Aspect ratio (4:3, 16:9). Default assumes square pixels.

 Dirac video demuxer (diracsys)
      --dirac-dts-offset <integer [-2147483648 .. 2147483647]> 
                                 Value to adjust dts by
          Value to adjust dts by

 Headphone virtual spatialization effect (headphone_channel_mixer)
 This effect gives you the feeling that you are standing in a room with a complete 7.1 speaker set when using only a headphone, providing a more realistic sound experience. It should also be more comfortable and less tiring when listening to music for long periods of time.
It works with any source format from mono to 7.1.
      --headphone-dim <integer [-2147483648 .. 2147483647]> 
                                 Characteristic dimension
          Distance between front left speaker and listener in meters.
      --headphone-compensate, --no-headphone-compensate 
                                 Compensate delay (default disabled)
          The delay which is introduced by the physical algorithm may sometimes
          be disturbing for the synchronization between lips-movement and
          speech. In case, turn this on to compensate. (default disabled)
      --headphone-dolby, --no-headphone-dolby 
                                 No decoding of Dolby Surround (default
                                 disabled)
          Dolby Surround encoded streams won’t be decoded before being
          processed by this filter. Enabling this setting is not recommended.
          (default disabled)

 Sound Delay (chorus_flanger)
 Add a delay effect to the sound
      --delay-time <float>       Delay time
          Time in milliseconds of the average delay. Note average
      --sweep-depth <float>      Sweep Depth
          Time in milliseconds of the maximum sweep depth. Thus, the sweep
          range will be delay-time +/- sweep-depth.
      --sweep-rate <float>       Sweep Rate
          Rate of change of sweep depth in milliseconds shift per second of
          play
      --feedback-gain <float [-0.900000 .. 0.900000]> 
                                 Feedback gain
          Gain on Feedback loop
      --wet-mix <float [-0.999000 .. 0.999000]> 
                                 Wet mix
          Level of delayed signal
      --dry-mix <float [-0.999000 .. 0.999000]> 
                                 Dry Mix
          Level of input signal

 Volume normaliser (normvol)
      --norm-buff-size <integer [-2147483648 .. 2147483647]> 
                                 Number of audio buffers
          This is the number of audio buffers on which the power measurement is
          made. A higher number of buffers will increase the response time of
          the filter to a spike but will make it less sensitive to short
          variations.
      --norm-max-level <float>   Maximal volume level
          If the average power over the last N buffers is higher than this
          value, the volume will be normalised. This value is a positive
          floating point number. A value between 0.5 and 10 seems sensible.

 Audio channel remapper (remap)
      --aout-remap-channel-left {0 (Left), 1 (Centre), 2 (Right), 3 (Rear left), 4 (Rear center), 5 (Rear right), 6 (Side left), 7 (Side right), 8 (Low-frequency effects)} 
                                 Left
          Left
      --aout-remap-channel-center {0 (Left), 1 (Centre), 2 (Right), 3 (Rear left), 4 (Rear center), 5 (Rear right), 6 (Side left), 7 (Side right), 8 (Low-frequency effects)} 
                                 Centre
          Centre
      --aout-remap-channel-right {0 (Left), 1 (Centre), 2 (Right), 3 (Rear left), 4 (Rear center), 5 (Rear right), 6 (Side left), 7 (Side right), 8 (Low-frequency effects)} 
                                 Right
          Right
      --aout-remap-channel-rearleft {0 (Left), 1 (Centre), 2 (Right), 3 (Rear left), 4 (Rear center), 5 (Rear right), 6 (Side left), 7 (Side right), 8 (Low-frequency effects)} 
                                 Rear left
          Rear left
      --aout-remap-channel-rearcenter {0 (Left), 1 (Centre), 2 (Right), 3 (Rear left), 4 (Rear center), 5 (Rear right), 6 (Side left), 7 (Side right), 8 (Low-frequency effects)} 
                                 Rear center
          Rear center
      --aout-remap-channel-rearright {0 (Left), 1 (Centre), 2 (Right), 3 (Rear left), 4 (Rear center), 5 (Rear right), 6 (Side left), 7 (Side right), 8 (Low-frequency effects)} 
                                 Rear right
          Rear right
      --aout-remap-channel-middleleft {0 (Left), 1 (Centre), 2 (Right), 3 (Rear left), 4 (Rear center), 5 (Rear right), 6 (Side left), 7 (Side right), 8 (Low-frequency effects)} 
                                 Side left
          Side left
      --aout-remap-channel-middleright {0 (Left), 1 (Centre), 2 (Right), 3 (Rear left), 4 (Rear center), 5 (Rear right), 6 (Side left), 7 (Side right), 8 (Low-frequency effects)} 
                                 Side right
          Side right
      --aout-remap-channel-lfe {0 (Left), 1 (Centre), 2 (Right), 3 (Rear left), 4 (Rear center), 5 (Rear right), 6 (Side left), 7 (Side right), 8 (Low-frequency effects)} 
                                 Low-frequency effects
          Low-frequency effects
      --aout-remap-normalize, --no-aout-remap-normalize 
                                 Normalize channels (default enabled)
          When mapping more than one channel to a single output channel,
          normalize the output accordingly. (default enabled)

 Stereo to mono downmixer (mono)
      --sout-mono-downmix, --no-sout-mono-downmix 
                                 Use downmix algorithm (default enabled)
          This option selects a stereo to mono downmix algorithm that is used
          in the headphone channel mixer. It gives the effect of standing in a
          room full of speakers. (default enabled)
      --sout-mono-channel {0 (Left), 1 (Right), 4 (Rear left), 5 (Rear right), 7 (Centre), 8 (Low-frequency effects), 2 (Side left), 3 (Side right), 6 (Rear center)} 
                                 Select channel to keep
          This option silences all other channels except the selected channel.

 Parametric Equaliser (param_eq)
      --param-eq-lowf <float>    Low freq (Hz)
      --param-eq-lowgain <float [-20.000000 .. 20.000000]> 
                                 Low freq gain (dB)
      --param-eq-highf <float>   High freq (Hz)
      --param-eq-highgain <float [-20.000000 .. 20.000000]> 
                                 High freq gain (dB)
      --param-eq-f1 <float>      Freq 1 (Hz)
      --param-eq-gain1 <float [-20.000000 .. 20.000000]> 
                                 Freq 1 gain (dB)
      --param-eq-q1 <float [0.100000 .. 100.000000]> 
                                 Freq 1 Q
      --param-eq-f2 <float>      Freq 2 (Hz)
      --param-eq-gain2 <float [-20.000000 .. 20.000000]> 
                                 Freq 2 gain (dB)
      --param-eq-q2 <float [0.100000 .. 100.000000]> 
                                 Freq 2 Q
      --param-eq-f3 <float>      Freq 3 (Hz)
      --param-eq-gain3 <float [-20.000000 .. 20.000000]> 
                                 Freq 3 gain (dB)
      --param-eq-q3 <float [0.100000 .. 100.000000]> 
                                 Freq 3 Q

 Secret Rabbit Code (libsamplerate) resampler (samplerate)
      --src-converter-type {0 (Sinc function (best quality)), 1 (Sinc function (medium quality)), 2 (Sinc function (fast)), 3 (Zero Order Hold (fastest)), 4 (Linear (fastest))} 
                                 Sample rate converter type
          Different resampling algorithms are supported. The best one is
          slower, while the fast one exhibits low quality.

 Simple stereo widening effect (stereo_widen)
 This filter enhances the stereo effect by suppressing mono (signal common to both channels) and by delaying the signal of left into right and vice versa, thereby widening the stereo effect.
      --delay <float>            Delay time
          Time in ms of the delay of left signal into right and vice versa.
      --feedback <float [0.000000 .. 0.900000]> 
                                 Feedback gain
          Amount of gain in delayed left signal into right and vice versa.
          Gives a delay effect of left signal in right output and vice versa
          which gives widening effect.
      --crossfeed <float [0.000000 .. 0.800000]> 
                                 Crossfeed
          Cross feed of left into right with inverted phase. This helps in
          suppressing the mono. If the value is 1 it will cancel all the signal
          common to both channels.
      --dry-mix <float [0.000000 .. 1.000000]> 
                                 Dry mix
          Level of input signal of original channel.

 Audio Spatialiser (spatializer)
      --spatializer-roomsize <float [0.000000 .. 1.100000]> 
                                 Room size
          Defines the virtual surface of the room emulated by the filter.
      --spatializer-width <float [0.000000 .. 1.000000]> 
                                 Room width
          Width of the virtual room
      --spatializer-wet <float [0.000000 .. 1.000000]> 
                                 Wet
      --spatializer-dry <float [0.000000 .. 1.000000]> 
                                 Dry
      --spatializer-damp <float [0.000000 .. 1.000000]> 
                                 Damp

 Audio tempo scaler synched with rate (scaletempo)
      --scaletempo-stride <integer [1 .. 2000]> 
                                 Stride Length
          Length in milliseconds to output each stride
      --scaletempo-overlap <float [0.000000 .. 1.000000]> 
                                 Overlap Length
          Percentage of stride to overlap
      --scaletempo-search <integer [0 .. 200]> 
                                 Search Length
          Length in milliseconds to search for best overlap position

 Speex resampler (speex_resampler)
      --speex-resampler-quality <integer [0 .. 10]> 
                                 Resampling quality
          Resampling quality (0 = worst and fastest, 10 = best and slowest).

 DTS Coherent Acoustics audio decoder (dtstofloat32)
      --dts-dynrng, --no-dts-dynrng 
                                 DTS dynamic range compression (default
                                 enabled)
          Dynamic range compression makes the loud sounds softer, and the soft
          sounds louder, so you can more easily listen to the stream in a noisy
          environment without disturbing anyone. If you disable the dynamic
          range compression the playback will be more adapted to a movie
          theater or a listening room. (default enabled)

 Equaliser with 10 bands (equalizer)
      --equalizer-preset {flat,classical,club,dance,fullbass,fullbasstreble,fulltreble,headphones,largehall,live,party,pop,reggae,rock,ska,soft,softrock,techno} 
                                 Equaliser preset
          Preset to use for the equaliser.
      --equalizer-bands <string> Bands gain
          Don't use presets, but manually specified bands. You need to provide
          10 values between -20dB and 20dB, separated by spaces, e.g. "0 2 4 2
          0 -2 -4 -2 0 2".
      --equalizer-2pass, --no-equalizer-2pass 
                                 Two pass (default disabled)
          Filter the audio twice. This provides a more intense effect. (default
          disabled)
      --equalizer-vlcfreqs, --no-equalizer-vlcfreqs 
                                 Use VLC frequency bands (default enabled)
          Use the VLC frequency bands. Otherwise, use the ISO Standard
          frequency bands. (default enabled)
      --equalizer-preamp <float> Global gain
          Set the global gain in dB (-20 ... 20).

 Dynamic range compressor (compressor)
      --compressor-rms-peak <float> 
                                 RMS/peak
          Set the RMS/peak (0 ... 1).
      --compressor-attack <float> 
                                 Attack time
          Set the attack time in milliseconds (1.5 ... 400).
      --compressor-release <float> 
                                 Release time
          Set the release time in milliseconds (2 ... 800).
      --compressor-threshold <float> 
                                 Threshold level
          Set the threshold level in dB (-30 ... 0).
      --compressor-ratio <float> Ratio
          Set the ratio (n:1) (1 ... 20).
      --compressor-knee <float>  Knee radius
          Set the knee radius in dB (1 ... 10).
      --compressor-makeup-gain <float> 
                                 Makeup gain
          Set the makeup gain in dB (0 ... 24).

 Audio part of the BarGraph function (audiobargraph_a)
      --audiobargraph_a-bargraph <integer [-2147483648 .. 2147483647]> 
                                 Defines if BarGraph information should be sent
          Defines if BarGraph information should be sent. 1 if the information
          should be sent, 0 otherwise (default 1).
      --audiobargraph_a-bargraph_repetition <integer [-2147483648 .. 2147483647]> 
                                 Sends the barGraph information every n audio
                                 packets
          Defines how often the barGraph information should be sent. Sends the
          barGraph information every n audio packets (default 4).
      --audiobargraph_a-silence <integer [-2147483648 .. 2147483647]> 
                                 Defines if silence alarm information should be
                                 sent
          Defines if silence alarm information should be sent. 1 if the
          information should be sent, 0 otherwise (default 1).
      --audiobargraph_a-time_window <integer [-2147483648 .. 2147483647]> 
                                 Time window to use in ms
          Time Window during when the audio level is measured in ms for silence
          detection. If the audio level is under the threshold during this
          time, an alarm is sent (default 5000).
      --audiobargraph_a-alarm_threshold <float> 
                                 Minimum Audio level to raise the alarm
          Threshold to be attained to raise an alarm. If the audio level is
          under the threshold during this time, an alarm is sent (default 0.1).
      --audiobargraph_a-repetition_time <integer [-2147483648 .. 2147483647]> 
                                 Time between two alarm messages in ms
          Time between two alarm messages in ms. This value is used to avoid
          alarm saturation (default 2000).

 Gain control filter (gain)
      --gain-value <float>       Gain multiplier
          Increase or decrease the gain (default 1.0)

 ATSC A/52 (AC-3) audio decoder (a52tofloat32)
      --a52-dynrng, --no-a52-dynrng 
                                 A/52 dynamic range compression (default
                                 enabled)
          Dynamic range compression makes the loud sounds softer, and the soft
          sounds louder, so you can more easily listen to the stream in a noisy
          environment without disturbing anyone. If you disable the dynamic
          range compression the playback will be more adapted to a movie
          theater or a listening room. (default enabled)
      --a52-upmix, --no-a52-upmix 
                                 Enable internal upmixing (default disabled)
          Enable the internal upmixing algorithm (not recommended). (default
          disabled)

 Skinnable Interface (skins2)
      --skins2-last <string>     Skin to use
          Path to the skin to use.
      --skins2-config <string>   Config of last used skin
          Windows configuration of the last skin used. This option is updated
          automatically, do not touch it.
      --skins2-transparency, --no-skins2-transparency 
                                 Enable transparency effects (default disabled)
          You can disable all transparency effects if you want. This is mainly
          useful when moving windows does not behave correctly. (default
          disabled)
      --skinned-playlist, --no-skinned-playlist 
                                 Use a skinned playlist (default enabled)
          Use a skinned playlist (default enabled)
      --skinned-video, --no-skinned-video 
                                 Display video in a skinned window if any
                                 (default enabled)
          When set to 'no', this parameter is intended to give old skins a
          chance to play back video even though no video tag is implemented
          (default enabled)

 Ncurses interface (ncurses)
      --browse-dir <string>      Filebrowser starting point
          This option allows you to specify the directory the ncurses
          filebrowser will show you initially.

 Qt interface (qt4)
      --qt-minimal-view, --no-qt-minimal-view 
                                 Start in minimal view (without menus) (default
                                 disabled)
          Start in minimal view (without menus) (default disabled)
      --qt-system-tray, --no-qt-system-tray 
                                 Systray icon (default enabled)
          Show an icon in the systray allowing you to control VLC media player
          for basic actions. (default enabled)
      --qt-notification {0 (Never), 1 (When minimised), 2 (Always)} 
                                 Show notification popup on track change
          Show a notification popup with the artist and track name when the
          current playlist item changes, when VLC is minimized or hidden.
      --qt-start-minimized, --no-qt-start-minimized 
                                 Start VLC with only a systray icon (default
                                 disabled)
          VLC will start with just an icon in your taskbar (default disabled)
      --qt-pause-minimized, --no-qt-pause-minimized 
                                 Pause the video playback when minimised
                                 (default disabled)
          With this option enabled, the playback will be automatically paused
          when minimizing the window. (default disabled)
      --qt-opacity <float [0.100000 .. 1.000000]> 
                                 Windows opacity between 0.1 and 1
          Sets the windows opacity between 0.1 and 1 for main interface,
          playlist and extended panel. This option only works with Windows and
          X11 with composite extensions.
      --qt-fs-opacity <float [0.100000 .. 1.000000]> 
                                 Fullscreen controller opacity between 0.1 and
                                 1
          Sets the fullscreen controller opacity between 0.1 and 1 for main
          interface, playlist and extended panel. This option only works with
          Windows and X11 with composite extensions.
      --qt-video-autoresize, --no-qt-video-autoresize 
                                 Resize interface to the native video size
                                 (default enabled)
          You have two choices:  - The interface will resize to the native
          video size  - The video will fit to the interface size  By default,
          interface resize to the native video size. (default enabled)
      --qt-name-in-title, --no-qt-name-in-title 
                                 Show playing item name in window title
                                 (default enabled)
          Show the name of the song or video in the controller window title.
          (default enabled)
      --qt-fs-controller, --no-qt-fs-controller 
                                 Show a controller in fullscreen mode (default
                                 enabled)
          Show a controller in fullscreen mode (default enabled)
      --qt-recentplay, --no-qt-recentplay 
                                 Save the recently played items in the menu
                                 (default enabled)
          Save the recently played items in the menu (default enabled)
      --qt-recentplay-filter <string> 
                                 List of words separated by | to filter
          Regular expression used to filter the recent items played in the
          player
      --qt-continue {0 (Never), 1 (Ask), 2 (Always)} 
                                 Continue playback?
          Continue playback?
      --qt-embedded-open, --no-qt-embedded-open 
                                 Embed the file browser in open dialog (default
                                 disabled)
          Embed the file browser in open dialog (default disabled)
      --qt-advanced-pref, --no-qt-advanced-pref 
                                 Show advanced preferences over simple ones
                                 (default disabled)
          Show advanced preferences and not simple preferences when opening the
          preferences dialog. (default disabled)
      --qt-error-dialogs, --no-qt-error-dialogs 
                                 Show unimportant error and warnings dialogs
                                 (default enabled)
          Show unimportant error and warnings dialogs (default enabled)
      --qt-slider-colours <string> 
                                 Define the colours of the volume slider 
          Define the colours of the volume slider By specifying the 12 numbers
          separated by a ';' Default is
          '255;255;255;20;226;20;255;176;15;235;30;20' An alternative can be
          '30;30;50;40;40;100;50;50;160;150;150;255' 
      --qt-privacy-ask, --no-qt-privacy-ask 
                                 Ask for network policy at start (default
                                 disabled)
          Ask for network policy at start (default disabled)
      --qt-fullscreen-screennumber <integer [-2147483648 .. 2147483647]> 
                                 Define which screen fullscreen goes
          Screennumber of fullscreen, instead of same screen where interface is
      --qt-autoload-extensions, --no-qt-autoload-extensions 
                                 Load extensions on startup (default enabled)
          Automatically load the extensions module on startup (default enabled)
      --qt-bgcone, --no-qt-bgcone 
                                 Display background cone or art (default
                                 enabled)
          Display background cone or current album art when not playing. Can be
          disabled to prevent burning screen. (default enabled)
      --qt-bgcone-expands, --no-qt-bgcone-expands 
                                 Expanding background cone or art. (default
                                 disabled)
          Background art fits window's size (default disabled)
      --qt-icon-change, --no-qt-icon-change 
                                 Allow automatic icon changes (default enabled)
          This option allows the interface to change its icon on various
          occasions. (default enabled)
      --qt-max-volume <integer [60 .. 300]> 
                                 Maximum Volume displayed
          Maximum Volume displayed
      --qt-fs-sensitivity <integer [0 .. 4000]> 
                                 Fullscreen controller mouse sensitivity
          Fullscreen controller mouse sensitivity

 Folder meta data (folder)
      --album-art-filename <string> 
                                 Album art filename
          Filename to look for album art in current directory

 MP4/MOV muxer (mux_mp4)
      --sout-mp4-faststart, --no-sout-mp4-faststart 
                                 Create "Fast Start" files (default enabled)
          Create "Fast Start" files. "Fast Start" files are optimised for
          downloads and allow the user to start previewing the file while it is
          downloading. (default enabled)

 PS muxer (mux_ps)
      --sout-ps-dts-delay <integer [-2147483648 .. 2147483647]> 
                                 DTS delay (ms)
          Delay the DTS (decoding time stamps) and PTS (presentation
          timestamps) of the data in the stream, compared to the SCRs. This
          allows for some buffering inside the client decoder.
      --sout-ps-pes-max-size <integer [-2147483648 .. 2147483647]> 
                                 PES maximum size
          Set the maximum allowed PES size when producing the MPEG PS streams.

 AVI muxer (mux_avi)
      --sout-avi-artist <string> Artist
      --sout-avi-date <string>   Date
      --sout-avi-genre <string>  Genre
      --sout-avi-copyright <string> 
                                 Copyright
      --sout-avi-comment <string> 
                                 Comment
      --sout-avi-name <string>   Name
      --sout-avi-subject <string> 
                                 Subject
      --sout-avi-encoder <string> 
                                 Encoder
      --sout-avi-keywords <string> 
                                 Keywords

 TS muxer (libdvbpsi) (mux_ts)
      --sout-ts-pid-video <integer [-2147483648 .. 2147483647]> 
                                 Video PID
          Assign a fixed PID to the video stream. The PCR PID will
          automatically be the video.
      --sout-ts-pid-audio <integer [-2147483648 .. 2147483647]> 
                                 Audio PID
          Assign a fixed PID to the audio stream.
      --sout-ts-pid-spu <integer [-2147483648 .. 2147483647]> 
                                 SPU PID
          Assign a fixed PID to the SPU.
      --sout-ts-pid-pmt <integer [-2147483648 .. 2147483647]> 
                                 PMT PID
          Assign a fixed PID to the PMT
      --sout-ts-tsid <integer [-2147483648 .. 2147483647]> 
                                 TS ID
          Assign a fixed Transport Stream ID.
      --sout-ts-netid <integer [-2147483648 .. 2147483647]> 
                                 NET ID
          Assign a fixed Network ID (for SDT table)
      --sout-ts-program-pmt <string> 
                                 PMT Program numbers
          Assign a program number to each PMT. This requires "Set PID to ID of
          ES" to be enabled.
      --sout-ts-es-id-pid, --no-sout-ts-es-id-pid 
                                 Set PID to ID of ES (default disabled)
          Sets PID to the ID if the incoming ES. This is for use with
          --ts-es-id-pid, and allows having the same PIDs in the input and
          output streams. (default disabled)
      --sout-ts-muxpmt <string>  Mux PMT (requires --sout-ts-es-id-pid)
          Define the pids to add to each pmt. This requires "Set PID to ID of
          ES" to be enabled.
      --sout-ts-sdtdesc <string> SDT Descriptors (requires --sout-ts-es-id-pid)
          Defines the descriptors of each SDT. Thisrequires "Set PID to ID of
          ES" to be enabled.
      --sout-ts-alignment, --no-sout-ts-alignment 
                                 Data alignment (default enabled)
          Enforces alignment of all access units on PES boundaries. Disabling
          this might save some bandwidth but introduce incompatibilities.
          (default enabled)
      --sout-ts-shaping <integer [-2147483648 .. 2147483647]> 
                                 Shaping delay (ms)
          Cut the stream in slices of the given duration, and ensure a constant
          bitrate between the two boundaries. This avoids having huge bitrate
          peaks, especially for reference frames.
      --sout-ts-use-key-frames, --no-sout-ts-use-key-frames 
                                 Use keyframes (default disabled)
          If enabled, and shaping is specified, the TS muxer will place the
          boundaries at the end of I pictures. In that case, the shaping
          duration given by the user is a worse case used when no reference
          frame is available. This enhances the efficiency of the shaping
          algorithm, since I frames are usually the biggest frames in the
          stream. (default disabled)
      --sout-ts-pcr <integer [-2147483648 .. 2147483647]> 
                                 PCR interval (ms)
          Set at which interval PCRs (Program Clock Reference) will be sent (in
          milliseconds). This value should be below 100ms. (default is 70ms).
      --sout-ts-bmin <integer [-2147483648 .. 2147483647]> 
                                 Minimum B (deprecated)
          This setting is deprecated and not used anymore
      --sout-ts-bmax <integer [-2147483648 .. 2147483647]> 
                                 Maximum B (deprecated)
          This setting is deprecated and not used anymore
      --sout-ts-dts-delay <integer [-2147483648 .. 2147483647]> 
                                 DTS delay (ms)
          Delay the DTS (decoding time stamps) and PTS (presentation
          timestamps) of the data in the stream, compared to the PCRs. This
          allows for some buffering inside the client decoder.
      --sout-ts-crypt-audio, --no-sout-ts-crypt-audio 
                                 Crypt audio (default enabled)
          Crypt audio using CSA (default enabled)
      --sout-ts-crypt-video, --no-sout-ts-crypt-video 
                                 Crypt video (default enabled)
          Crypt video using CSA (default enabled)
      --sout-ts-csa-ck <string>  CSA Key
          CSA encryption key. This must be a 16 char string (8 hexadecimal
          bytes).
      --sout-ts-csa2-ck <string> Second CSA Key
          The even CSA encryption key. This must be a 16 char string (8
          hexadecimal bytes).
      --sout-ts-csa-use <string> CSA Key in use
          CSA encryption key used. It can be the odd/first/1 (default) or the
          even/second/2 one.
      --sout-ts-csa-pkt <integer [-2147483648 .. 2147483647]> 
                                 Packet size in bytes to encrypt
          Size of the TS packet to encrypt. The encryption routines subtract
          the TS-header from the value before encrypting.

 Ogg/OGM muxer (mux_ogg)
      --sout-ogg-indexintvl <integer [0 .. 2147483647]> 
                                 Index interval
          Minimal index interval, in microseconds. Set to 0 to disable index
          creation.
      --sout-ogg-indexratio <float [1.000000 .. 1000.000000]> 
                                 Index size ratio
          Set index size ratio. Alters default (60min content) or estimated
          size.

 ASF muxer (mux_asf)
      --sout-asf-title <string>  Title
          Title to put in ASF comments.
      --sout-asf-author <string> Author
          Author to put in ASF comments.
      --sout-asf-copyright <string> 
                                 Copyright
          Copyright string to put in ASF comments.
      --sout-asf-comment <string> 
                                 Comment
          Comment to put in ASF comments.
      --sout-asf-rating <string> Rating
          "Rating" to put in ASF comments.
      --sout-asf-packet-size <integer [-2147483648 .. 2147483647]> 
                                 Packet Size
          ASF packet size -- default is 4096 bytes
      --sout-asf-bitrate-override <integer [-2147483648 .. 2147483647]> 
                                 Bitrate override
          Do not try to guess ASF bitrate. Setting this, allows you to control
          how Windows Media Player will cache streamed content. Set to
          audio+video bitrate in bytes

 MPEG-I/II video packetiser (packetizer_mpegvideo)
      --packetizer-mpegvideo-sync-iframe, --no-packetizer-mpegvideo-sync-iframe 
                                 Sync on Intra Frame (default disabled)
          Normally the packetiser would sync on the next full frame. This flags
          instructs the packetiser to sync on the first Intra Frame found.
          (default disabled)

 SDI Input (linsys_sdi)
      --linsys-sdi-link <integer [-2147483648 .. 2147483647]> 
                                 Link #
          Allows you to set the desired link of the board for the capture
          (starting at 0).
      --linsys-sdi-id-video <integer [-2147483648 .. 2147483647]> 
                                 Video ID
          Allows you to set the ES ID of the video.
      --linsys-sdi-aspect-ratio <string> 
                                 Aspect ratio
          Allows you to force the aspect ratio of the video.
      --linsys-sdi-audio <string> 
                                 Audio configuration
          Allows you to set audio configuration
          (id=group,pair:id=group,pair...).
      --linsys-sdi-telx <string> Teletext configuration
          Allows you to set Teletext configuration (id=line1-lineN with both
          fields).
      --linsys-sdi-telx-lang <string> 
                                 Teletext language
          Allows you to set Teletext language (page=lang/type,...).

 Video CD (VCD 1.0, 1.1, 2.0, SVCD, HQVCD) input (vcdx)

 vcdx://[device-or-file][@{P,S,T}num]
      --vcdx-debug <integer [-2147483648 .. 2147483647]> 
                                 If nonzero, this gives additional debug
                                 information.
          This integer when viewed in binary is a debugging mask meta info     
             1 event info        2 MRL               4 external call     8 all
          calls (10)   16 LSN       (20)   32 PBC       (40)   64 libcdio  
          (80)  128 seek-set (100)  256 seek-cur (200)  512 still    (400) 1024
          vcdinfo  (800) 2048 
      --vcdx-blocks-per-read <integer [-2147483648 .. 2147483647]> 
                                 Number of CD blocks to get in a single read.
          Number of CD blocks to get in a single read.
      --vcdx-PBC, --no-vcdx-PBC  Use playback control? (default disabled)
          If VCD is authored with playback control, use it. Otherwise we play
          by tracks. (default disabled)
      --vcdx-track-length, --no-vcdx-track-length 
                                 Use track length as maximum unit in seek?
                                 (default enabled)
          If set, the length of the seek bar is the track rather than the
          length of an entry. (default enabled)
      --vcdx-extended-info, --no-vcdx-extended-info 
                                 Show extended VCD info? (default disabled)
          Show the maximum amount of information under Stream and Media Info.
          Shows for example playback control navigation. (default disabled)
      --vcdx-author-format <string> 
                                 Format to use in the playlist’s “author”
                                 field.
          Format used in the GUI Playlist Title. Similar to the Unix date 
          Format specifiers that start with a percent sign. Specifiers are:    
          %A : The album information    %C : The VCD volume count - the number
          of CDs in the collection    %c : The VCD volume num - the number of
          the CD in the collection.    %F : The VCD Format, e.g. VCD 1.0, VCD
          1.1, VCD 2.0, or SVCD    %I : The current entry/segment/playback
          type, e.g. ENTRY, TRACK, SEGMENT...    %L : The playlist ID prefixed
          with " LID" if it exists    %N : The current number of the %I - a
          decimal number    %P : The publisher ID    %p : The preparer ID    %S
          : If we are in a segment (menu), the kind of segment    %T : The MPEG
          track number (starts at 1)    %V : The volume set ID    %v : The
          volume ID        A number between 1 and the volume count.    %% : a %
           
      --vcdx-title-format <string> 
                                 Format to use in the playlist’s “title” field.
          Format used in the GUI Playlist Title. Similar to the Unix date 
          Format specifiers that start with a percent sign. Specifiers are:    
          %A : The album information    %C : The VCD volume count - the number
          of CDs in the collection    %c : The VCD volume num - the number of
          the CD in the collection.    %F : The VCD Format, e.g. VCD 1.0, VCD
          1.1, VCD 2.0, or SVCD    %I : The current entry/segment/playback
          type, e.g. ENTRY, TRACK, SEGMENT...    %L : The playlist ID prefixed
          with " LID" if it exists    %N : The current number of the %I - a
          decimal number    %P : The publisher ID    %p : The preparer ID    %S
          : If we are in a segment (menu), the kind of segment    %T : The MPEG
          track number (starts at 1)    %V : The volume set ID    %v : The
          volume ID        A number between 1 and the volume count.    %% : a %
           

 Blu-ray Disc support (libbluray) (libbluray)
      --bluray-menu, --no-bluray-menu 
                                 Blu-ray menus (default disabled)
          Use Blu-ray menus. If disabled, the movie will start directly
          (default disabled)
      --bluray-region {A,B,C}    Region code
          Blu-Ray player region code. Some discs can be played only with a
          correct region code.

 Audio CD input (cdda)

 [cdda:][device][@[track]]
      --cdda-track <integer [-2147483648 .. 2147483647]> 
                                 
      --cdda-first-sector <integer [-2147483648 .. 2147483647]> 
                                 
      --cdda-last-sector <integer [-2147483648 .. 2147483647]> 
                                 
      --cddb-server <string>     CDDB Server
          Address of the CDDB server to use.
      --cddb-port <integer [1 .. 65535]> 
                                 CDDB port
          CDDB Server port to use.

 DVB input with v4l2 support (dvb)
      --dvb-probe, --no-dvb-probe 
                                 Probe DVB card for capabilities (default
                                 enabled)
          Some DVB cards do not like to be probed for their capabilities, you
          can disable this feature if you experience some trouble. (default
          enabled)
      --dvb-satellite <string>   Satellite scanning config
          filename of config file in share/dvb/dvb-s

 File input (filesystem)
   Directory:
      --recursive {none,collapse,expand} 
                                 Subdirectory behaviour
          Select whether subdirectories must be expanded. none: subdirectories
          do not appear in the playlist. collapse: subdirectories appear but
          are expanded on first play. expand: all subdirectories are expanded. 
      --ignore-filetypes <string> 
                                 Ignored extensions
          Files with these extensions will not be added to playlist when
          opening a directory. This is useful if you add directories that
          contain playlist files for instance. Use a comma-separated list of
          extensions.
      --directory-sort {collate,version,none} 
                                 Directory sort order
          Define the sort algorithm used when adding items from a directory.

 HTTP input (http)
      --http-proxy <string>      HTTP proxy
          HTTP proxy to be used It must be of the form
          http://[user@]myproxy.mydomain:myport/ ; if empty, the http_proxy
          environment variable will be tried.
      --http-proxy-pwd <string>  HTTP proxy password
          If your HTTP proxy requires a password, set it here.
      --http-referrer <string>   HTTP referer value
          Customise the HTTP referer, simulating a previous document
      --http-user-agent <string> User Agent
          The name and version of the program will be provided to the HTTP
          server. They must be separated by a forward slash, e.g. FooBar/1.2.3.
          This option can only be specified per input item, not globally.
      --http-reconnect, --no-http-reconnect 
                                 Auto re-connect (default disabled)
          Automatically try to reconnect to the stream in case of a sudden
          disconnect. (default disabled)
      --http-continuous, --no-http-continuous 
                                 Continuous stream (default disabled)
          Read a file that is being constantly updated (for example, a JPG file
          on a server). You should not globally enable this option as it will
          break all other types of HTTP streams. (default disabled)
      --http-forward-cookies, --no-http-forward-cookies 
                                 Forward Cookies (default enabled)
          Forward Cookies across http redirections. (default enabled)

 Screen capture (with X11/XCB) (xcb_screen)
      --screen-fps <float>       Frame rate
          How many times the screen content should be refreshed per second.
      --screen-left <integer [-32768 .. 32767]> 
                                 Region left column
          Abscissa of the capture region in pixels.
      --screen-top <integer [-32768 .. 32767]> 
                                 Region top row
          Ordinate of the capture region in pixels.
      --screen-width <integer [0 .. 65535]> 
                                 Capture region width
          Pixel width of the capture region, or 0 for full width
      --screen-height <integer [0 .. 65535]> 
                                 Capture region height
          Pixel height of the capture region, or 0 for full height
      --screen-follow-mouse, --no-screen-follow-mouse 
                                 Follow the mouse (default disabled)
          Follow the mouse when capturing a subscreen. (default disabled)

 libavformat AVIO access (avio)
   Input:
      --avio-options <string>    Advanced options
          Advanced options, in the form {opt=val,opt2=val2}.
   Stream output:
      --sout-avio-options <string> 
                                 Advanced options
          Advanced options, in the form {opt=val,opt2=val2}.

 Memory input (imem)
      --imem-get <string>        Get function
          Address of the get callback function
      --imem-release <string>    Release function
          Address of the release callback function
      --imem-cookie <string>     Callback cookie string
          Text identifier for the callback functions
      --imem-data <string>       Callback data
          Data for the get and release functions
      --imem-id <integer [-2147483648 .. 2147483647]> 
                                 ID
          Set the ID of the elementary stream
      --imem-group <integer [-2147483648 .. 2147483647]> 
                                 Group
          Set the group of the elementary stream
      --imem-cat {0 (Unknown), 1 (Audio), 2 (Video), 3 (Subtitle), 4 (Data)} 
                                 Category
          Set the category of the elementary stream
      --imem-codec <string>      Codec
          Set the codec of the elementary stream
      --imem-language <string>   Language
          Language of the elementary stream as described by ISO639
      --imem-samplerate <integer [-2147483648 .. 2147483647]> 
                                 Sample rate
          Sample rate of an audio elementary stream
      --imem-channels <integer [-2147483648 .. 2147483647]> 
                                 Channels count
          Channels count of an audio elementary stream
      --imem-width <integer [-2147483648 .. 2147483647]> 
                                 Width
          Width of video or subtitle elementary streams
      --imem-height <integer [-2147483648 .. 2147483647]> 
                                 Height
          Height of video or subtitle elementary streams
      --imem-dar <string>        Display aspect ratio
          Display aspect ratio of a video elementary stream
      --imem-fps <string>        Frame rate
          Frame rate of a video elementary stream
      --imem-size <integer [-2147483648 .. 2147483647]> 
                                 Size
          Size of stream in bytes

 SFTP input (sftp)
      --sftp-readsize <integer [-2147483648 .. 2147483647]> 
                                 Read size
          Size of the request for reading access
      --sftp-port <integer [-2147483648 .. 2147483647]> 
                                 SFTP port
          SFTP port number to use on the server

 RTP/RTSP/SDP demuxer (using Live555) (live555)
      --rtsp-tcp, --no-rtsp-tcp  Use RTP over RTSP (TCP) (default disabled)
          Use RTP over RTSP (TCP) (default disabled)
      --rtp-client-port <integer [-2147483648 .. 2147483647]> 
                                 Client port
          Port to use for the RTP source of the session
      --rtsp-mcast, --no-rtsp-mcast 
                                 Force multicast RTP via RTSP (default
                                 disabled)
          Force multicast RTP via RTSP (default disabled)
      --rtsp-http, --no-rtsp-http 
                                 Tunnel RTSP and RTP over HTTP (default
                                 disabled)
          Tunnel RTSP and RTP over HTTP (default disabled)
      --rtsp-http-port <integer [-2147483648 .. 2147483647]> 
                                 HTTP tunnel port
          Port to use for tunneling the RTSP/RTP over HTTP.
      --rtsp-kasenna, --no-rtsp-kasenna 
                                 Kasenna RTSP dialect (default disabled)
          Kasenna servers use an old and nonstandard dialect of RTSP. With this
          parameter VLC will try this dialect, but then it cannot connect to
          normal RTSP servers. (default disabled)
      --rtsp-wmserver, --no-rtsp-wmserver 
                                 WMServer RTSP dialect (default disabled)
          WMServer uses a nonstandard dialect of RTSP. Selecting this parameter
          will tell VLC to assume some options contrary to RFC 2326 guidelines.
          (default disabled)
      --rtsp-user <string>       RTSP user name
          Sets the username for the connection, if no username or password are
          set in the url.
      --rtsp-pwd <string>        RTSP password
          Sets the password for the connection, if no username or password are
          set in the url.
      --rtsp-frame-buffer-size <integer [-2147483648 .. 2147483647]> 
                                 RTSP frame buffer size
          RTSP start frame buffer size of the video track, can be increased in
          case of broken pictures due to too small buffer.

 SMB input (smb)
 Samba (Windows network shares) input
      --smb-user <string>        SMB user name
          User name that will be used for the connection.
      --smb-pwd <string>         SMB password
          Password that will be used for the connection.
      --smb-domain <string>      SMB domain
          Domain/Workgroup that will be used for the connection.

 Video4Linux input (v4l2)
   Video input:
      --v4l2-dev <string>        Video capture device
          Video capture device node.
      --v4l2-vbidev <string>     VBI capture device
          The device node where VBI data can be read  (for closed captions) 
      --v4l2-standard {,ALL,PAL,PAL_BG,PAL_DK,NTSC,SECAM,SECAM_DK,MTS,525_60,625_50,ATSC,B,G,H,L,GH,DK,BG,MN,PAL_B,PAL_B1,PAL_G,PAL_H,PAL_I,PAL_D,PAL_D1,PAL_K,PAL_M,PAL_N,PAL_Nc,PAL_60,NTSC_M,NTSC_M_JP,NTSC_443,NTSC_M_KR,SECAM_B,SECAM_D,SECAM_G,SECAM_H,SECAM_K,SECAM_K1,SECAM_L,SECAM_LC,ATSC_8_VSB,ATSC_16_VSB} 
                                 Standard
          Video standard (Default, SECAM, PAL, or NTSC).
      --v4l2-chroma <string>     Video input chroma format
          Force the Video4Linux2 video device to use a specific chroma format
          (eg. I420 or I422 for raw images, MJPG for M-JPEG compressed input)
          (Complete list: GREY, I240, RV16, RV15, RV24, RV32, YUY2, YUYV, UYVY,
          I41N, I422, I420, I411, I410, MJPG)
      --v4l2-input <integer [0 .. 4294967294]> 
                                 Input
          Input of the card to use (see debug).
      --v4l2-audio-input <integer [-1 .. 4294967294]> 
                                 Audio input
          Audio input of the card to use (see debug).
      --v4l2-width <integer [0 .. 4096]> 
                                 Width
          The specified pixel resolution is forced (if both width and height
          are strictly positive).
      --v4l2-height <integer [0 .. 4096]> 
                                 Height
          The specified pixel resolution is forced (if both width and height
          are strictly positive).
      --v4l2-aspect-ratio <string> 
                                 Picture aspect-ratio n:m
          Define input picture aspect-ratio to use. Default is 4:3
      --v4l2-fps <string>        Frame rate
          Maximum frame rate to use (0 = no limits).
   Tuner:
      --v4l2-radio-dev <string>  Radio device
          Radio tuner device node.
      --v4l2-tuner-frequency <integer [-1 .. 4294967294]> 
                                 Frequency
          Tuner frequency in Hz or kHz (see debug output)
      --v4l2-tuner-audio-mode {0 (Mono), 1 (Stereo), 3 (Primary language), 2 (Secondary language or program), 4 (Dual mono)} 
                                 Audio mode
          Tuner audio mono/stereo and track selection.
   Controls:
   Video capture controls (if supported by the device)
      --v4l2-controls-reset, --no-v4l2-controls-reset 
                                 Reset controls (default disabled)
          Reset controls to defaults. (default disabled)
      --v4l2-brightness <integer [-2147483648 .. 2147483647]> 
                                 Brightness
          Picture brightness or black level.
      --v4l2-brightness-auto {-1 (Unspecified), 0 (Off), 1 (On)} 
                                 Automatic brightness
          Automatically adjust the picture brightness.
      --v4l2-contrast <integer [-2147483648 .. 2147483647]> 
                                 Contrast
          Picture contrast or luma gain.
      --v4l2-saturation <integer [-2147483648 .. 2147483647]> 
                                 Saturation
          Picture saturation or chroma gain.
      --v4l2-hue <integer [-2147483648 .. 2147483647]> 
                                 Hue
          Hue or colour balance.
      --v4l2-hue-auto {-1 (Unspecified), 0 (Off), 1 (On)} 
                                 Automatic hue
          Automatically adjust the picture hue.
      --v4l2-white-balance-temperature <integer [-1 .. 6500]> 
                                 White balance temperature (K)
          White balance temperature as a colour temperation in Kelvin (2800 is
          minimum incandescence, 6500 is maximum daylight).
      --v4l2-auto-white-balance {-1 (Unspecified), 0 (Off), 1 (On)} 
                                 Automatic white balance
          Automatically adjust the picture white balance.
      --v4l2-red-balance <integer [-2147483648 .. 2147483647]> 
                                 Red balance
          Red chroma balance.
      --v4l2-blue-balance <integer [-2147483648 .. 2147483647]> 
                                 Blue balance
          Blue chroma balance.
      --v4l2-gamma <integer [-2147483648 .. 2147483647]> 
                                 Gamma
          Gamma adjust.
      --v4l2-autogain {-1 (Unspecified), 0 (Off), 1 (On)} 
                                 Automatic gain
          Automatically set the video gain.
      --v4l2-gain <integer [-2147483648 .. 2147483647]> 
                                 Gain
          Picture gain.
      --v4l2-sharpness <integer [-2147483648 .. 2147483647]> 
                                 Sharpness
          Sharpness filter adjust.
      --v4l2-chroma-gain <integer [-2147483648 .. 2147483647]> 
                                 Chroma gain
          Chroma gain control.
      --v4l2-chroma-gain-auto <integer [-2147483648 .. 2147483647]> 
                                 Automatic chroma gain
          Automatically control the chroma gain.
      --v4l2-power-line-frequency {-1 (Unspecified), 0 (Off), 1 (50 Hz), 2 (60 Hz), 3 (Automatic)} 
                                 Power line frequency
          Power line frequency anti-flicker filter.
      --v4l2-backlight-compensation <integer [-2147483648 .. 2147483647]> 
                                 Backlight compensation
          Backlight compensation
      --v4l2-band-stop-filter <integer [-2147483648 .. 2147483647]> 
                                 Band-stop filter
          Cut a light band induced by fluorescent lighting (unit undocumented).
      --v4l2-hflip, --no-v4l2-hflip 
                                 Horizontal flip (default disabled)
          Flip the picture horizontally. (default disabled)
      --v4l2-vflip, --no-v4l2-vflip 
                                 Vertical flip (default disabled)
          Flip the picture vertically. (default disabled)
      --v4l2-rotate <integer [-1 .. 359]> 
                                 Rotate (degrees)
          Picture rotation angle (in degrees).
      --v4l2-color-killer {-1 (Unspecified), 0 (Off), 1 (On)} 
                                 Colour killer
          Enable the colour killer, i.e. switch to black & white picture
          whenever the signal is weak.
      --v4l2-color-effect {-1 (Unspecified), 0 (None), 1 (Black & white), 2 (Sepia), 3 (Negative), 4 (Emboss), 5 (Sketch), 6 (Sky blue), 7 (Grass green), 8 (Skin whiten), 9 (Vivid)} 
                                 Colour effect
          Select a colour effect.
      --v4l2-audio-volume <integer [-2147483648 .. 2147483647]> 
                                 Audio volume
          Volume of the audio input.
      --v4l2-audio-balance <integer [-2147483648 .. 2147483647]> 
                                 Audio balance
          Balance of the audio input.
      --v4l2-audio-mute, --no-v4l2-audio-mute 
                                 Mute (default disabled)
          Mute the audio. (default disabled)
      --v4l2-audio-bass <integer [-2147483648 .. 2147483647]> 
                                 Bass level
          Bass adjustment of the audio input.
      --v4l2-audio-treble <integer [-2147483648 .. 2147483647]> 
                                 Treble level
          Treble adjustment of the audio input.
      --v4l2-audio-loudness, --no-v4l2-audio-loudness 
                                 Loudness mode (default disabled)
          Loudness mode a.k.a. bass boost. (default disabled)
      --v4l2-set-ctrls <string>  v4l2 driver controls
          Set the v4l2 driver controls to the values specified using a comma
          separated list optionally encapsulated by curly braces (e.g.:
          {video_bitrate=6000000,audio_crc=0,stream_type=3} ). To list
          available controls, increase verbosity (-vvv) or use the v4l2-ctl
          application.

 DVDRead Input (no menu support) (dvdread)
      --dvdread-angle <integer [-2147483648 .. 2147483647]> 
                                 DVD angle
          Default DVD angle.

 DVDnav Input (dvdnav)
      --dvdnav-angle <integer [-2147483648 .. 2147483647]> 
                                 DVD angle
          Default DVD angle.
      --dvdnav-menu, --no-dvdnav-menu 
                                 Start directly in menu (default enabled)
          Start the DVD directly in the main menu. This will try to skip all
          the useless warning introductions. (default enabled)

 Microsoft Media Server (MMS) input (access_mms)
      --mms-timeout <integer [-2147483648 .. 2147483647]> 
                                 TCP/UDP timeout (ms)
          Amount of time (in ms) to wait before aborting network reception of
          data. Note that there will be 10 retries before completely giving up.
      --mms-all, --no-mms-all    Force selection of all streams (default
                                 disabled)
          MMS streams can contain several elementary streams, with different
          bitrates. You can choose to select all of them. (default disabled)
      --mms-maxbitrate <integer [-2147483648 .. 2147483647]> 
                                 Maximum bitrate
          Select the stream with the maximum bitrate under that limit.
      --mmsh-proxy <string>      HTTP proxy
          HTTP proxy to be used It must be of the form
          http://[user[:pass]@]myproxy.mydomain:myport/ ; if empty, the
          http_proxy environment variable will be tried.

 FTP input (ftp)
      --ftp-user <string>        FTP user name
          User name that will be used for the connection.
      --ftp-pwd <string>         FTP password
          Password that will be used for the connection.
      --ftp-account <string>     FTP account
          Account that will be used for the connection.

 Digital Television and Radio (dtv)
      --dvb-adapter <integer [0 .. 255]> 
                                 DVB adapter
          If there is more than one digital broadcasting adapter, the adapter
          number must be selected. Numbering starts from zero.
      --dvb-device <integer [0 .. 255]> 
                                 DVB device
          If the adapter provides multiple independent tuner devices, the
          device number must be selected. Numbering starts from zero.
      --dvb-budget-mode, --no-dvb-budget-mode 
                                 Do not demultiplex (default disabled)
          Only useful programs are normally demultiplexed from the transponder.
          This option will disable demultiplexing and receive all programs.
          (default disabled)
      --dvb-frequency <integer [0 .. 107999999]> 
                                 Frequency (Hz)
          TV channels are grouped by transponder (a.k.a. multiplex) on a given
          frequency. This is required to tune the receiver.
      --dvb-inversion {-1 (Automatic), 0 (Off), 1 (On)} 
                                 Spectrum inversion
          If the demodulator cannot detect spectral inversion correctly, it
          needs to be configured manually.
   Terrestrial reception parameters:
      --dvb-bandwidth {0 (Automatic), 10 (10 MHz), 8 (8 MHz), 7 (7 MHz), 6 (6 MHz), 5 (5 MHz), 2 (1.712 MHz)} 
                                 Bandwidth (MHz)
          Bandwidth (MHz)
      --dvb-transmission {-1 (Automatic), 1 (1k), 2 (2k), 4 (4k), 8 (8k), 16 (16k), 32 (32k)} 
                                 Transmission mode
          Transmission mode
      --dvb-guard {,1/128,1/32,1/16,19/256,1/8,19/128,1/4} 
                                 Guard interval
          Guard interval
   DVB-T reception parameters:
      --dvb-code-rate-hp {,0,1/2,3/5,2/3,3/4,4/5,5/6,6/7,7/8,8/9,9/10} 
                                 High-priority code rate
          The code rate for Forward Error Correction can be specified.
      --dvb-code-rate-lp {,0,1/2,3/5,2/3,3/4,4/5,5/6,6/7,7/8,8/9,9/10} 
                                 Low-priority code rate
          The code rate for Forward Error Correction can be specified.
      --dvb-hierarchy {-1 (Automatic), 0 (None), 1 (1), 2 (2), 4 (4)} 
                                 Hierarchy mode
          Hierarchy mode
      --dvb-plp-id <integer [0 .. 4294967295]> 
                                 DVB-T2 Physical Layer Pipe
          DVB-T2 Physical Layer Pipe
   ISDB-T reception parameters:
      --dvb-a-modulation {,QAM,16QAM,32QAM,64QAM,128QAM,256QAM,8VSB,16VSB,QPSK,DQPSK,8PSK,16APSK,32APSK} 
                                 Layer A modulation
          The digital signal can be modulated according with different
          constellations (depending on the delivery system). If the demodulator
          cannot detect the constellation automatically, it needs to be
          configured manually.
      --dvb-a-fec {,0,1/2,3/5,2/3,3/4,4/5,5/6,6/7,7/8,8/9,9/10} 
                                 Layer A code rate
          The code rate for Forward Error Correction can be specified.
      --dvb-a-count <integer [0 .. 13]> 
                                 Layer A segments count
      --dvb-a-interleaving <integer [0 .. 3]> 
                                 Layer A time interleaving
      --dvb-b-modulation {,QAM,16QAM,32QAM,64QAM,128QAM,256QAM,8VSB,16VSB,QPSK,DQPSK,8PSK,16APSK,32APSK} 
                                 Layer B modulation
          The digital signal can be modulated according with different
          constellations (depending on the delivery system). If the demodulator
          cannot detect the constellation automatically, it needs to be
          configured manually.
      --dvb-b-fec {,0,1/2,3/5,2/3,3/4,4/5,5/6,6/7,7/8,8/9,9/10} 
                                 Layer B code rate
          The code rate for Forward Error Correction can be specified.
      --dvb-b-count <integer [0 .. 13]> 
                                 Layer B segments count
      --dvb-b-interleaving <integer [0 .. 3]> 
                                 Layer B time interleaving
      --dvb-c-modulation {,QAM,16QAM,32QAM,64QAM,128QAM,256QAM,8VSB,16VSB,QPSK,DQPSK,8PSK,16APSK,32APSK} 
                                 Layer C modulation
          The digital signal can be modulated according with different
          constellations (depending on the delivery system). If the demodulator
          cannot detect the constellation automatically, it needs to be
          configured manually.
      --dvb-c-fec {,0,1/2,3/5,2/3,3/4,4/5,5/6,6/7,7/8,8/9,9/10} 
                                 Layer C code rate
          The code rate for Forward Error Correction can be specified.
      --dvb-c-count <integer [0 .. 13]> 
                                 Layer C segments count
      --dvb-c-interleaving <integer [0 .. 3]> 
                                 Layer C time interleaving
   Cable and satellite reception parameters:
      --dvb-modulation {,QAM,16QAM,32QAM,64QAM,128QAM,256QAM,8VSB,16VSB,QPSK,DQPSK,8PSK,16APSK,32APSK} 
                                 Modulation / Constellation
          The digital signal can be modulated according with different
          constellations (depending on the delivery system). If the demodulator
          cannot detect the constellation automatically, it needs to be
          configured manually.
      --dvb-srate <integer [0 .. 4294967295]> 
                                 Symbol rate (bauds)
          The symbol rate must be specified manually for some systems, notably
          DVB-C, DVB-S and DVB-S2.
      --dvb-fec {,0,1/2,3/5,2/3,3/4,4/5,5/6,6/7,7/8,8/9,9/10} 
                                 FEC code rate
          The code rate for Forward Error Correction can be specified.
   DVB-S2 parameters:
      --dvb-pilot {-1 (Automatic), 0 (Off), 1 (On)} 
                                 Pilot
          Pilot
      --dvb-rolloff {-1 (Automatic), 35 (0.35 (same as DVB-S)), 20 (0.20), 25 (0.25)} 
                                 Roll-off factor
          Roll-off factor
   ISDB-S parameters:
      --dvb-ts-id <integer [0 .. 65535]> 
                                 Transport stream ID
          Transport stream ID
   Satellite equipment control:
      --dvb-polarization {,V,H,R,L} 
                                 Polarization (Voltage)
          To select the polarization of the transponder, a different voltage is
          normally applied to the low noise block-downconverter (LNB).
      --dvb-voltage <integer [0 .. 18]> 
                                 
      --dvb-high-voltage, --no-dvb-high-voltage 
                                 High LNB voltage (default disabled)
          If the cables between the satellilte low noise block-downconverter
          and the receiver are long, higher voltage may be required. Not all
          receivers support this. (default disabled)
      --dvb-lnb-low <integer [0 .. 2147483647]> 
                                 Local oscillator low frequency (kHz)
          The downconverter (LNB) will substract the local oscillator frequency
          from the satellite transmission frequency. The intermediate frequency
          (IF) on the RF cable is the result.
      --dvb-lnb-high <integer [0 .. 2147483647]> 
                                 Local oscillator high frequency (kHz)
          The downconverter (LNB) will substract the local oscillator frequency
          from the satellite transmission frequency. The intermediate frequency
          (IF) on the RF cable is the result.
      --dvb-lnb-switch <integer [0 .. 2147483647]> 
                                 Universal LNB switch frequency (kHz)
          If the satellite transmission frequency exceeds the switch frequency,
          the oscillator high frequency will be used as reference. Furthermore
          the automatic continuous 22kHz tone will be sent.
      --dvb-satno {0 (Unspecified), 1 (A/1), 2 (B/2), 3 (C/3), 4 (D/4)} 
                                 DiSEqC LNB number
          If the satellite receiver is connected to multiple low noise
          block-downconverters (LNB) through a DiSEqC 1.0 switch, the correct
          LNB can be selected (1 to 4). If there is no switch, this parameter
          should be 0.
      --dvb-uncommitted {0 (Unspecified), 1 (A/1), 2 (B/2), 3 (C/3), 4 (D/4)} 
                                 Uncommitted DiSEqC LNB number
          If the satellite receiver is connected to multiple low noise
          block-downconverters (LNB) through a cascade formed from DiSEqC 1.1
          uncommitted switch and DiSEqC 1.0 committed switch, the correct
          uncommitted LNB can be selected (1 to 4). If there is no uncommitted
          switch, this parameter should be 0.
      --dvb-tone {-1 (Automatic), 0 (Off), 1 (On)} 
                                 Continuous 22kHz tone
          A continuous tone at 22kHz can be sent on the cable. This normally
          selects the higher frequency band from a universal LNB.

 Real-Time Protocol (RTP) input (rtp)
      --rtcp-port <integer [0 .. 65535]> 
                                 RTCP (local) port
          RTCP packets will be received on this transport protocol port. If
          zero, multiplexed RTP/RTCP is used.
      --srtp-key <string>        SRTP key (hexadecimal)
          RTP packets will be authenticated and deciphered with this Secure RTP
          master shared secret key. This must be a 32-character-long
          hexadecimal string.
      --srtp-salt <string>       SRTP salt (hexadecimal)
          Secure RTP requires a (non-secret) master salt value. This must be a
          28-character-long hexadecimal string.
      --rtp-max-src <integer [1 .. 255]> 
                                 Maximum RTP sources
          How many distinct active RTP sources are allowed at a time.
      --rtp-timeout <integer [-2147483648 .. 2147483647]> 
                                 RTP source timeout (sec)
          How long to wait for any packet before a source is expired.
      --rtp-max-dropout <integer [0 .. 32767]> 
                                 Maximum RTP sequence number dropout
          RTP packets will be discarded if they are too much ahead (i.e. in the
          future) by this many packets from the last received packet.
      --rtp-max-misorder <integer [0 .. 32767]> 
                                 Maximum RTP sequence number misordering
          RTP packets will be discarded if they are too far behind (i.e. in the
          past) by this many packets from the last received packet.
      --rtp-dynamic-pt {theora}  RTP payload format assumed for dynamic
                                 payloads
          This payload format will be assumed for dynamic payload types
          (between 96 and 127) if it can't be determined otherwise with
          out-of-band mappings (SDP)

 Shared memory framebuffer (shm)
      --shm-fps <float>          Frame rate
          How many times the screen content should be refreshed per second.
      --shm-depth {0 (XWD file (autodetect)), 8 (8 bits), 15 (15 bits), 16 (16 bits), 24 (24 bits), 32 (32 bits)} 
                                 Frame buffer depth
          Pixel depth of the frame buffer, or zero for XWD file
      --shm-width <integer [0 .. 65535]> 
                                 Frame buffer width
          Pixel width of the frame buffer (ignored for XWD file)
      --shm-height <integer [0 .. 65535]> 
                                 Frame buffer height
          Pixel height of the frame buffer (ignored for XWD file)
      --shm-file <string>        Frame buffer file
          Path of the memory mapped file of the frame buffer
      --shm-id <integer [-2147483648 .. 2147483647]> 
                                 Frame buffer segment ID
          System V shared memory segment ID of the frame buffer (this is
          ignored if --shm-file is specified).

 RDP Remote Desktop (rdp)
      --rdp-user <string>        RDP auth username
          RDP auth username
      --rdp-password <string>    RDP auth password
          RDP Password
      --rdp-fps <float>          Frame rate
          Acquisition rate (in fps)
      --rdp-encrypt, --no-rdp-encrypt 
                                 Encrypted connexion (default disabled)
          Encrypted connexion (default disabled)

 Time code subpicture elementary stream generator (timecode)
      --timecode-fps {24/1,25/1,30000/1001,30/1} 
                                 Frame rate
          Frame rate

 HD-SDI Input (linsys_hdsdi)
      --linsys-hdsdi-link <integer [-2147483648 .. 2147483647]> 
                                 Link #
          Allows you to set the desired link of the board for the capture
          (starting at 0).
      --linsys-hdsdi-id-video <integer [-2147483648 .. 2147483647]> 
                                 Video ID
          Allows you to set the ES ID of the video.
      --linsys-hdsdi-aspect-ratio <string> 
                                 Aspect ratio
          Allows you to force the aspect ratio of the video.
      --linsys-hdsdi-audio <string> 
                                 Audio configuration
          Allows you to set audio configuration
          (id=group,pair:id=group,pair...).

 UDP input (udp)
      --udp-buffer <integer [-2147483648 .. 2147483647]> 
                                 Receive buffer
          UDP receive buffer size (bytes)

 VNC client access (vnc)
      --rfb-user <string>        Username
          Username
      --rfb-password <string>    Password
          Password
      --rfb-x509-ca <string>     X.509 Certificate Authority
          Certificate of the Authority to verify server's against
      --rfb-x509-crl <string>    X.509 Certificate Revocation List
          List of revoked servers certificates
      --rfb-x509-client-cert <string> 
                                 X.509 Client certificate
          Certificate for client authentification
      --rfb-x509-client-key <string> 
                                 X.509 Client private key
          Private key for authentification by certificate
      --rfb-fps <float>          Frame rate
          How many times the screen content should be refreshed per second.
      --rfb-chroma {RV32,RV24,RV16,RGB8} 
                                 Frame buffer depth
          RGB chroma (RV32, RV24, RV16, RGB2)
      --rfb-compress-level <integer [0 .. 9]> 
                                 Compression level
          Transfer compression level from 0 (none) to 9 (max)
      --rfb-quality-level <integer [1 .. 9]> 
                                 Image quality
          Image quality 1 to 9 (max)

 VDR recordings (vdr)
 Support for VDR recordings (http://www.tvdr.de/).
      --vdr-chapter-offset <integer [-2147483648 .. 2147483647]> 
                                 Chapter offset in ms
          Move all chapters. This value should be set in milliseconds.
      --vdr-fps <float [1.000000 .. 1000.000000]> 
                                 Frame rate
          Default frame rate for chapter import.

 ALSA audio capture (access_alsa)
 Pass alsa:// to open the default ALSA capture device, or alsa://SOURCE to open a specific device named SOURCE.
      --alsa-stereo, --no-alsa-stereo 
                                 Stereo (default enabled)
          Stereo (default enabled)
      --alsa-samplerate {192000 (192000 Hz), 176400 (176400 Hz), 96000 (96000 Hz), 88200 (88200 Hz), 48000 (48000 Hz), 44100 (44100 Hz), 32000 (32000 Hz), 22050 (22050 Hz), 24000 (24000 Hz), 16000 (16000 Hz), 11025 (11025 Hz), 8000 (8000 Hz), 4000 (4000 Hz)} 
                                 Sample rate
          Sample rate

 Podcasts (podcast)
      --podcast-urls <string>    Podcast URLs list
          Enter the list of podcasts to retrieve, separated by '|' (pipe).

 Network streams (SAP) (sap)
      --sap-addr <string>        SAP multicast address
          The SAP module normally chooses itself the right addresses to listen
          to. However, you can specify a specific address.
      --sap-timeout <integer [-2147483648 .. 2147483647]> 
                                 SAP timeout (seconds)
          Delay after which SAP items get deleted if no new announcement is
          received.
      --sap-parse, --no-sap-parse 
                                 Try to parse the announce (default enabled)
          This enables actual parsing of the announces by the SAP module.
          Otherwise, all announcements are parsed by the "live555" (RTP/RTSP)
          module. (default enabled)
      --sap-strict, --no-sap-strict 
                                 SAP Strict mode (default disabled)
          When this is set, the SAP parser will discard some non-compliant
          announcements. (default disabled)

 Audio memory output (amem)
      --amem-format <string>     Sample format
          Sample format
      --amem-rate <integer [1 .. 352800]> 
                                 Sample rate
          Sample rate
      --amem-channels <integer [1 .. 9]> 
                                 Channels count
          Channels count

 File audio output (afile)
      --audiofile-file <string>  Output file
          File to which the audio samples will be written to. ("-" for stdout
      --audiofile-format {u8,s16,float32,spdif} 
                                 Output format
          Output format
      --audiofile-channels <integer [0 .. 6]> 
                                 Number of output channels
          By default (0), all the channels of the incoming will be saved but
          you can restrict the number of channels here.
      --audiofile-wav, --no-audiofile-wav 
                                 Add WAVE header (default enabled)
          Instead of writing a raw file, you can add a WAV header to the file.
          (default enabled)

 ALSA audio output (alsa)
      --alsa-audio-device <string> 
                                 Audio output device
          Audio output device (using ALSA syntax).
      --alsa-audio-channels {1 (Mono), 6 (Stereo), 102 (Surround 4.0), 4198 (Surround 4.1), 103 (Surround 5.0), 4199 (Surround 5.1), 4967 (Surround 7.1)} 
                                 Audio output channels
          Channels available for audio output. If the input has more channels
          than the output, it will be down-mixed. This parameter is ignored
          when digital pass-through is active.
      --alsa-gain <float [0.000000 .. 8.000000]> 
                                 Software gain
          This linear gain will be applied in software.

 Change the id of an elementary stream (stream_out_setid)
   Set ES id:
      --sout-setid-id <integer [-2147483648 .. 2147483647]> 
                                 Elementary Stream ID
          Specify an identifier integer for this elementary stream
      --sout-setid-new-id <integer [-2147483648 .. 2147483647]> 
                                 New ES ID
          Specify an new identifier integer for this elementary stream
   Set ES Lang:
      --sout-setlang-id <integer [-2147483648 .. 2147483647]> 
                                 Elementary Stream ID
          Specify an identifier integer for this elementary stream
      --sout-setlang-lang <string> 
                                 Language
          Specify an ISO-639 code (three characters) for this elementary stream

 Chromaprint stream output (stream_out_chromaprint)
      --duration <integer [-2147483648 .. 2147483647]> 
                                 Duration of the fingerprinting
          Default: 90sec

 Remote Audio Output Protocol stream output (stream_out_raop)
      --sout-raop-host <string>  Host
          Hostname or IP address of target device
      --sout-raop-password <string> 
                                 Password
          Password for target device.
      --sout-raop-password-file <string> 
                                 Password file
          Read password for target device from file.
      --sout-raop-volume <integer [0 .. 255]> 
                                 Volume
          Output volume for analogue output: 0 for silence, 1..255 from almost
          silent to very loud.

 Stream output to memory buffer (stream_out_smem)
      --sout-smem-video-prerender-callback <string> 
                                 Video prerender callback
          Address of the video prerender callback function. This function will
          set the buffer where render will be done.
      --sout-smem-audio-prerender-callback <string> 
                                 Audio prerender callback
          Address of the audio prerender callback function. This function will
          set the buffer where render will be done.
      --sout-smem-video-postrender-callback <string> 
                                 Video postrender callback
          Address of the video postrender callback function. This function will
          be called when the render is into the buffer.
      --sout-smem-audio-postrender-callback <string> 
                                 Audio postrender callback
          Address of the audio postrender callback function. This function will
          be called when the render is into the buffer.
      --sout-smem-video-data <string> 
                                 Video Callback data
          Data for the video callback function.
      --sout-smem-audio-data <string> 
                                 Audio callback data
          Data for the video callback function.
      --sout-smem-time-sync, --no-sout-smem-time-sync 
                                 Time Synchronised output (default enabled)
          Time Synchronisation option for output. If true, stream will render
          as usual, else it will be rendered as fast as possible. (default
          enabled)

 RTP stream output (stream_out_rtp)
      --sout-rtp-dst <string>    Destination
          This is the output URL that will be used.
      --sout-rtp-sdp <string>    SDP
          This allows you to specify how the SDP (Session Descriptor) for this
          RTP session will be made available. You must use a url:
          http://location to access the SDP via HTTP, rtsp://location for RTSP
          access, and sap:// for the SDP to be announced via SAP.
      --sout-rtp-mux <string>    Muxer
          This allows you to specify the muxer used for the streaming output.
          Default is to use no muxer (standard RTP stream).
      --sout-rtp-sap, --no-sout-rtp-sap 
                                 SAP announcing (default disabled)
          Announce this session with SAP. (default disabled)
      --sout-rtp-name <string>   Session name
          This is the name of the session that will be announced in the SDP
          (Session Descriptor).
      --sout-rtp-cat <string>    Session category
          This allows you to specify a category for the session, that will be
          announced if you choose to use SAP.
      --sout-rtp-description <string> 
                                 Session description
          This allows you to give a short description with details about the
          stream, that will be announced in the SDP (Session Descriptor).
      --sout-rtp-url <string>    Session URL
          This allows you to give a URL with more details about the stream
          (often the website of the streaming organization), that will be
          announced in the SDP (Session Descriptor).
      --sout-rtp-email <string>  Session email
          This allows you to give a contact mail address for the stream, that
          will be announced in the SDP (Session Descriptor).
      --sout-rtp-phone <string>  Session phone number
          This allows you to give a contact telephone number for the stream,
          that will be announced in the SDP (Session Descriptor).
      --sout-rtp-proto {dccp,sctp,tcp,udp,udplite} 
                                 Transport protocol
          This selects which transport protocol to use for RTP.
      --sout-rtp-port <integer [-2147483648 .. 2147483647]> 
                                 Port
          This allows you to specify the base port for the RTP streaming.
      --sout-rtp-port-audio <integer [-2147483648 .. 2147483647]> 
                                 Audio port
          This allows you to specify the default audio port for the RTP
          streaming.
      --sout-rtp-port-video <integer [-2147483648 .. 2147483647]> 
                                 Video port
          This allows you to specify the default video port for the RTP
          streaming.
      --sout-rtp-ttl <integer [-2147483648 .. 2147483647]> 
                                 Hop limit (TTL)
          This is the hop limit (also known as "Time-To-Live" or TTL) of the
          multicast packets sent by the stream output (-1 = use operating
          system built-in default).
      --sout-rtp-rtcp-mux, --no-sout-rtp-rtcp-mux 
                                 RTP/RTCP multiplexing (default disabled)
          This sends and receives RTCP packet multiplexed over the same port as
          RTP packets. (default disabled)
      --sout-rtp-caching <integer [-2147483648 .. 2147483647]> 
                                 Caching value (ms)
          Default caching value for outbound RTP streams. This value should be
          set in milliseconds.
      --sout-rtp-key <string>    SRTP key (hexadecimal)
          RTP packets will be integrity-protected and ciphered with this Secure
          RTP master shared secret key. This must be a 32-character-long
          hexadecimal string.
      --sout-rtp-salt <string>   SRTP salt (hexadecimal)
          Secure RTP requires a (non-secret) master salt value. This must be a
          28-character-long hexadecimal string.
      --sout-rtp-mp4a-latm, --no-sout-rtp-mp4a-latm 
                                 MP4A LATM (default disabled)
          This allows you to stream MPEG4 LATM audio streams (see RFC3016).
          (default disabled)
      --rtsp-timeout <integer [-2147483648 .. 2147483647]> 
                                 RTSP session timeout (s)
          RTSP sessions will be closed after not receiving any RTSP request for
          this long. Setting it to a negative value or zero disables timeouts.
          The default is 60 (one minute).
      --sout-rtsp-user <string>  Username
          User name that will be requested to access the stream.
      --sout-rtsp-pwd <string>   Password
          Password that will be requested to access the stream.

 Standard stream output (stream_out_standard)
      --sout-standard-access <string> 
                                 Output access method
          Output method to use for the stream.
      --sout-standard-mux <string> 
                                 Output muxer
          Muxer to use for the stream.
      --sout-standard-dst <string> 
                                 Output destination
          Destination (URL) to use for the stream. Overrides path and bind
          parameters
      --sout-standard-bind <string> 
                                 address to bind to (helper setting for dst)
          address:port to bind vlc to listening incoming streams helper setting
          for dst,dst=bind+'/'+path. dst-parameter overrides this
      --sout-standard-path <string> 
                                 filename for stream (helper setting for dst)
          Filename for stream helper setting for dst, dst=bind+'/'+path,
          dst-parameter overrides this
      --sout-standard-sap, --no-sout-standard-sap 
                                 SAP announcing (default disabled)
          Announce this session with SAP. (default disabled)
      --sout-standard-name <string> 
                                 Session name
          This is the name of the session that will be announced in the SDP
          (Session Descriptor).
      --sout-standard-description <string> 
                                 Session description
          This allows you to give a short description with details about the
          stream, that will be announced in the SDP (Session Descriptor).
      --sout-standard-url <string> 
                                 Session URL
          This allows you to give a URL with more details about the stream
          (often the website of the streaming organization), that will be
          announced in the SDP (Session Descriptor).
      --sout-standard-email <string> 
                                 Session email
          This allows you to give a contact mail address for the stream, that
          will be announced in the SDP (Session Descriptor).
      --sout-standard-phone <string> 
                                 Session phone number
          This allows you to give a contact telephone number for the stream,
          that will be announced in the SDP (Session Descriptor).

 Writes statistic info about stream (stream_out_stats)
      --sout-stats-output <string> 
                                 Output file
          Writes stats to file instead of stdout
      --sout-stats-prefix <string> 
                                 Prefix to show on output line
          Prefix to show on output line

 Delay a stream (stream_out_delay)
      --sout-delay-id <integer [-2147483648 .. 2147483647]> 
                                 Elementary Stream ID
          Specify an identifier integer for this elementary stream
      --sout-delay-delay <integer [-2147483648 .. 2147483647]> 
                                 Delay of the ES (ms)
          Specify a delay (in ms) for this elementary stream. Positive means
          delay and negative means advance.

 Display stream output (stream_out_display)
      --sout-display-audio, --no-sout-display-audio 
                                 Enable audio (default enabled)
          Enable/disable audio rendering. (default enabled)
      --sout-display-video, --no-sout-display-video 
                                 Enable video (default enabled)
          Enable/disable video rendering. (default enabled)
      --sout-display-delay <integer [-2147483648 .. 2147483647]> 
                                 Delay (ms)
          Introduces a delay in the display of the stream.

 Bridge stream output (stream_out_bridge)
   Bridge out:
      --sout-bridge-out-id <integer [-2147483648 .. 2147483647]> 
                                 ID
          Integer identifier for this elementary stream. This will be used to
          "find" this stream later.
      --sout-bridge-out-in-name <string> 
                                 Destination bridge-in name
          Name of the destination bridge-in. If you do not need more than one
          bridge-in at a time, you can discard this option.
   Bridge in:
      --sout-bridge-in-delay <integer [-2147483648 .. 2147483647]> 
                                 Delay
          Pictures coming from the picture video outputs will be delayed
          according to this value (in milliseconds, should be >= 100 ms). For
          high values, you will need to raise caching values.
      --sout-bridge-in-id-offset <integer [-2147483648 .. 2147483647]> 
                                 ID Offset
          Offset to add to the stream IDs specified in bridge_out to obtain the
          stream IDs bridge_in will register.
      --sout-bridge-in-name <string> 
                                 Name of current instance
          Name of this bridge-in instance. If you do not need more than one
          bridge-in at a time, you can discard this option.
      --sout-bridge-in-placeholder, --no-sout-bridge-in-placeholder 
                                 Fallback to placeholder stream when out of
                                 data (default disabled)
          If set to true, the bridge will discard all input elementary streams
          except if it doesn't receive data from another bridge-in. This can be
          used to configure a place holder stream when the real source breaks.
          Source and placeholder streams should have the same format.  (default
          disabled)
      --sout-bridge-in-placeholder-delay <integer [-2147483648 .. 2147483647]> 
                                 Placeholder delay
          Delay (in ms) before the placeholder kicks in.
      --sout-bridge-in-placeholder-switch-on-iframe, --no-sout-bridge-in-placeholder-switch-on-iframe 
                                 Wait for I frame before toggling placeholder
                                 (default enabled)
          If enabled, switching between the placeholder and the normal stream
          will only occur on I frames. This will remove artifacts on stream
          switching at the expense of a slightly longer delay, depending on the
          frequence of I frames in the streams. (default enabled)

 Elementary stream output (stream_out_es)
   Generic:
      --sout-es-access <string>  Output access method
          This is the default output access method that will be used.
      --sout-es-mux <string>     Output muxer
          This is the default muxer method that will be used.
      --sout-es-dst <string>     Output URL
          This is the default output URI.
   Audio:
      --sout-es-access-audio <string> 
                                 Audio output access method
          This is the output access method that will be used for audio.
      --sout-es-mux-audio <string> 
                                 Audio output muxer
          This is the muxer that will be used for audio.
      --sout-es-dst-audio <string> 
                                 Audio output URL
          This is the output URI that will be used for audio.
   Video:
      --sout-es-access-video <string> 
                                 Video output access method
          This is the output access method that will be used for video.
      --sout-es-mux-video <string> 
                                 Video output muxer
          This is the muxer that will be used for video.
      --sout-es-dst-video <string> 
                                 Video output URL
          This is the output URI that will be used for video.

 Record stream output (stream_out_record)
      --sout-record-dst-prefix <string> 
                                 Destination prefix
          Prefix of the destination file automatically generated

 Mosaic bridge stream output (stream_out_mosaic_bridge)
      --sout-mosaic-bridge-id <string> 
                                 ID
          Specify an identifier string for this subpicture
      --sout-mosaic-bridge-width <integer [-2147483648 .. 2147483647]> 
                                 Video width
          Output video width.
      --sout-mosaic-bridge-height <integer [-2147483648 .. 2147483647]> 
                                 Video height
          Output video height.
      --sout-mosaic-bridge-sar <string> 
                                 Sample aspect ratio
          Sample aspect ratio of the destination (1:1, 3:4, 2:3).
      --sout-mosaic-bridge-chroma <string> 
                                 Image chroma
          Force the use of a specific chroma. Use YUVA if you're planning to
          use the Alphamask or Bluescreen video filter.
      --sout-mosaic-bridge-vfilter <string> 
                                 Video filter
          Video filters will be applied to the video stream.
      --sout-mosaic-bridge-alpha <integer [0 .. 255]> 
                                 Transparency
          Transparency of the mosaic picture.
      --sout-mosaic-bridge-x <integer [-2147483648 .. 2147483647]> 
                                 X offset
          X coordinate of the upper left corner in the mosaic if non negative.
      --sout-mosaic-bridge-y <integer [-2147483648 .. 2147483647]> 
                                 Y offset
          Y coordinate of the upper left corner in the mosaic if non negative.

 Transcode stream output (stream_out_transcode)
   Video:
      --sout-transcode-venc <string> 
                                 Video encoder
          This is the video encoder module that will be used (and its
          associated options).
      --sout-transcode-vcodec <string> 
                                 Destination video codec
          This is the video codec that will be used.
      --sout-transcode-vb <integer [-2147483648 .. 2147483647]> 
                                 Video bitrate
          Target bitrate of the transcoded video stream.
      --sout-transcode-scale <float> 
                                 Video scaling
          Scale factor to apply to the video while transcoding (eg: 0.25)
      --sout-transcode-fps <string> 
                                 Video frame-rate
          Target output frame rate for the video stream.
      --sout-transcode-deinterlace, --no-sout-transcode-deinterlace 
                                 Deinterlace video (default disabled)
          Deinterlace the video before encoding. (default disabled)
      --sout-transcode-deinterlace-module {deinterlace,ffmpeg-deinterlace} 
                                 Deinterlace module
          Specify the deinterlace module to use.
      --sout-transcode-width <integer [-2147483648 .. 2147483647]> 
                                 Video width
          Output video width.
      --sout-transcode-height <integer [-2147483648 .. 2147483647]> 
                                 Video height
          Output video height.
      --sout-transcode-maxwidth <integer [-2147483648 .. 2147483647]> 
                                 Maximum video width
          Maximum output video width.
      --sout-transcode-maxheight <integer [-2147483648 .. 2147483647]> 
                                 Maximum video height
          Maximum output video height.
      --sout-transcode-vfilter <string> 
                                 Video filter
          Video filters will be applied to the video streams (after overlays
          are applied). You can enter a colon-separated list of filters.
   Audio:
      --sout-transcode-aenc <string> 
                                 Audio encoder
          This is the audio encoder module that will be used (and its
          associated options).
      --sout-transcode-acodec <string> 
                                 Destination audio codec
          This is the audio codec that will be used.
      --sout-transcode-ab <integer [-2147483648 .. 2147483647]> 
                                 Audio bitrate
          Target bitrate of the transcoded audio stream.
      --sout-transcode-alang <string> 
                                 Audio language
          This is the language of the audio stream.
      --sout-transcode-channels <integer [0 .. 9]> 
                                 Audio channels
          Number of audio channels in the transcoded streams.
      --sout-transcode-samplerate <integer [0 .. 48000]> 
                                 Audio sample rate
          Sample rate of the transcoded audio stream (11250, 22500, 44100 or
          48000).
      --sout-transcode-afilter <string> 
                                 Audio filter
          Audio filters will be applied to the audio streams (after conversion
          filters are applied). You can enter a colon-separated list of
          filters.
   Overlays/Subtitles:
      --sout-transcode-senc <string> 
                                 Subtitle encoder
          This is the subtitle encoder module that will be used (and its
          associated options).
      --sout-transcode-scodec <string> 
                                 Destination subtitle codec
          This is the subtitle codec that will be used.
      --sout-transcode-soverlay, --no-sout-transcode-soverlay 
                                 Destination subtitle codec (default disabled)
          This is the subtitle codec that will be used. (default disabled)
      --sout-transcode-sfilter <string> 
                                 Overlays
          This allows you to add overlays (also known as "subpictures" on the
          transcoded video stream. The subpictures produced by the filters will
          be overlayed directly onto the video. You can specify a
          colon-separated list of subpicture modules
   On Screen Display:
      --sout-transcode-osd, --no-sout-transcode-osd 
                                 OSD menu (default disabled)
          Stream the On Screen Display menu (using the osdmenu subpicture
          module). (default disabled)
   Miscellaneous:
      --sout-transcode-threads <integer [-2147483648 .. 2147483647]> 
                                 Number of threads
          Number of threads used for the transcoding.
      --sout-transcode-high-priority, --no-sout-transcode-high-priority 
                                 High priority (default disabled)
          Runs the optional encoder thread at the OUTPUT priority instead of
          VIDEO. (default disabled)

 Dynamic language setting from teletext (stream_out_langfromtelx)
      --sout-langfromtelx-id <integer [-2147483648 .. 2147483647]> 
                                 Elementary Stream ID
          Specify an identifier integer for this elementary stream to change
      --sout-langfromtelx-magazine <integer [-2147483648 .. 2147483647]> 
                                 Magazine
          Specify the magazine containing the language page
      --sout-langfromtelx-page <integer [-2147483648 .. 2147483647]> 
                                 Page
          Specify the page containing the language
      --sout-langfromtelx-row <integer [-2147483648 .. 2147483647]> 
                                 Row
          Specify the row containing the language

 Video scaling filter (swscale)
      --swscale-mode {0 (Fast bilinear), 1 (Bilinear), 2 (Bicubic (good quality)), 3 (Experimental), 4 (Nearest neighbour (bad quality)), 5 (Area), 6 (Luma bicubic / chroma bilinear), 7 (Gauss), 8 (SincR), 9 (Lanczos), 10 (Bicubic spline)} 
                                 Scaling mode
          Scaling mode to use.

 Legacy RTSP VoD server (vod_rtsp)
      --rtsp-raw-mux <string>    MUX for RAW RTSP transport
          MUX for RAW RTSP transport
      --rtsp-throttle-users <integer [-2147483648 .. 2147483647]> 
                                 Maximum number of connections
          This limits the maximum number of clients that can connect to the
          RTSP VOD. 0 means no limit.
      --rtsp-session-timeout <integer [-2147483648 .. 2147483647]> 
                                 Sets the timeout option in the RTSP session
                                 string
          Defines what timeout option to add to the RTSP session ID string.
          Setting it to a negative number removes the timeout option entirely.
          This is needed by some IPTV STBs (such as those made by HansunTech)
          which get confused by it. The default is 5.

 File logging (logger)
      --logfile <string>         Log filename
          Specify the log filename.
      --logmode {text,html,syslog} 
                                 Log format
          Specify the logging format.
      --syslog-ident <string>    Syslog ident
          Set the ident that VLC would use when logging to syslog.
      --syslog-facility {user,daemon,local0,local1,local2,local3,local4,local5,local6,local7} 
                                 Syslog facility
          Select the syslog facility where logs will be forwarded.
      --log-verbose <integer [-2147483648 .. 2147483647]> 
                                 Verbosity
          Select the verbosity to use for log or -1 to use the same verbosity
          given by --verbose.

 Submission of played songs to last.fm (audioscrobbler)
      --lastfm-username <string> Username
          The username of your last.fm account
      --lastfm-password <string> Password
          The password of your last.fm account
      --scrobbler-url <string>   Scrobbler URL
          The URL set for an alternative scrobbler engine

 GNU TLS transport layer security (gnutls)
      --gnutls-priorities {PERFORMANCE,NORMAL,SECURE128,SECURE256,EXPORT} 
                                 TLS cipher priorities
          Ciphers, key exchange methods, hash functions and compression methods
          can be selected. Refer to GNU TLS documentation for detailed syntax.

 Clone video filter (clone)
 Duplicate your video to multiple windows and/or video output modules
      --clone-count <integer [-2147483648 .. 2147483647]> 
                                 Number of clones
          Number of video windows in which to clone the video.
      --clone-vout-list <string> Video output modules
          You can use specific video output modules for the clones. Use a
          comma-separated list of modules.

 Wall video filter (wall)
      --wall-cols <integer [1 .. 15]> 
                                 Number of columns
          Number of horizontal windows in which to split the video.
      --wall-rows <integer [1 .. 15]> 
                                 Number of rows
          Number of vertical windows in which to split the video.
      --wall-active <string>     Active windows
          Comma-separated list of active windows, defaults to all
      --wall-element-aspect <string> 
                                 Element aspect ratio
          Aspect ratio of the individual displays building the wall.

 Panoramix: wall with overlap video filter (panoramix)
 Split the video in multiple windows to display on a wall of screens
      --panoramix-cols <integer [-1 .. 15]> 
                                 Number of columns
          Select the number of horizontal video windows in which to split the
          video
      --panoramix-rows <integer [-1 .. 15]> 
                                 Number of rows
          Select the number of vertical video windows in which to split the
          video
      --panoramix-bz-length <integer [0 .. 100]> 
                                 length of the overlapping area (in %)
          Select in percent the length of the blended zone
      --panoramix-bz-height <integer [0 .. 100]> 
                                 height of the overlapping area (in %)
          Select in percent the height of the blended zone (case of 2x2 wall)
      --panoramix-attenuate, --no-panoramix-attenuate 
                                 Attenuation (default enabled)
          Check this option if you want attenuate blended zone by this plug-in
          (if option is unchecked, attenuate is made by opengl) (default
          enabled)
      --panoramix-bz-begin <integer [0 .. 100]> 
                                 Attenuation, begin (in %)
          Select in percent the Lagrange coefficient of the beginning blended
          zone
      --panoramix-bz-middle <integer [0 .. 100]> 
                                 Attenuation, middle (in %)
          Select in percent the Lagrange coefficient of the middle of blended
          zone
      --panoramix-bz-end <integer [0 .. 100]> 
                                 Attenuation, end (in %)
          Select in percent the Lagrange coefficient of the end of blended zone
      --panoramix-bz-middle-pos <integer [1 .. 99]> 
                                 middle position (in %)
          Select in percent (50 is center) the position of the middle point
          (Lagrange) of blended zone
      --panoramix-bz-gamma-red <float [0.000000 .. 5.000000]> 
                                 Gamma (Red) correction
          Select the gamma for the correction of blended zone (Red or Y
          component)
      --panoramix-bz-gamma-green <float [0.000000 .. 5.000000]> 
                                 Gamma (Green) correction
          Select the gamma for the correction of blended zone (Green or U
          component)
      --panoramix-bz-gamma-blue <float [0.000000 .. 5.000000]> 
                                 Gamma (Blue) correction
          Select the gamma for the correction of blended zone (Blue or V
          component)
      --panoramix-bz-blackcrush-red <integer [0 .. 255]> 
                                 Black Crush for Red
          Select the Black Crush of blended zone (Red or Y component)
      --panoramix-bz-blackcrush-green <integer [0 .. 255]> 
                                 Black Crush for Green
          Select the Black Crush of blended zone (Green or U component)
      --panoramix-bz-blackcrush-blue <integer [0 .. 255]> 
                                 Black Crush for Blue
          Select the Black Crush of blended zone (Blue or V component)
      --panoramix-bz-whitecrush-red <integer [0 .. 255]> 
                                 White Crush for Red
          Select the White Crush of blended zone (Red or Y component)
      --panoramix-bz-whitecrush-green <integer [0 .. 255]> 
                                 White Crush for Green
          Select the White Crush of blended zone (Green or U component)
      --panoramix-bz-whitecrush-blue <integer [0 .. 255]> 
                                 White Crush for Blue
          Select the White Crush of blended zone (Blue or V component)
      --panoramix-bz-blacklevel-red <integer [0 .. 255]> 
                                 Black Level for Red
          Select the Black Level of blended zone (Red or Y component)
      --panoramix-bz-blacklevel-green <integer [0 .. 255]> 
                                 Black Level for Green
          Select the Black Level of blended zone (Green or U component)
      --panoramix-bz-blacklevel-blue <integer [0 .. 255]> 
                                 Black Level for Blue
          Select the Black Level of blended zone (Blue or V component)
      --panoramix-bz-whitelevel-red <integer [0 .. 255]> 
                                 White Level for Red
          Select the White Level of blended zone (Red or Y component)
      --panoramix-bz-whitelevel-green <integer [0 .. 255]> 
                                 White Level for Green
          Select the White Level of blended zone (Green or U component)
      --panoramix-bz-whitelevel-blue <integer [0 .. 255]> 
                                 White Level for Blue
          Select the White Level of blended zone (Blue or V component)
      --panoramix-active <string> 
                                 Active windows
          Comma-separated list of active windows, defaults to all

 core program (core)

 Audio
 These options allow you to modify the behavior of the audio subsystem, and to add audio filters which can be used for post processing or visual effects (spectrum analyzer, etc.). Enable these filters here, and configure them in the "audio filters" modules section.
      --audio, --no-audio        Enable audio (default enabled)
          You can completely disable the audio output. The audio decoding stage
          will not take place, thus saving some processing power. (default
          enabled)
      --gain <float [0.000000 .. 8.000000]> 
                                 Audio gain
          This linear gain will be applied to outputted audio.
      --volume-step <float [1.000000 .. 256.000000]> 
                                 Audio output volume step
          The step size of the volume is adjustable using this option.
      --volume-save, --no-volume-save 
                                 Remember the audio volume (default enabled)
          Remember the audio volume (default enabled)
      --spdif, --no-spdif        Use S/PDIF when available (default disabled)
          S/PDIF can be used by default when your hardware supports it as well
          as the audio stream being played. (default disabled)
      --force-dolby-surround {0 (Auto), 1 (On), 2 (Off)} 
                                 Force detection of Dolby Surround
          Use this when you know your stream is (or is not) encoded with Dolby
          Surround but fails to be detected as such. Even if the stream is not
          actually encoded with Dolby Surround, turning on this option might
          enhance your experience, especially when combined with the Headphone
          Channel Mixer.
      --stereo-mode {0 (Unset), 1 (Stereo), 2 (Reverse stereo), 3 (Left), 4 (Right), 5 (Dolby Surround)} 
                                 Stereo audio output mode
          Stereo audio output mode
      --audio-desync <integer [-2147483648 .. 2147483647]> 
                                 Audio desynchronisation compensation
          This delays the audio output. The delay must be given in
          milliseconds. This can be handy if you notice a lag between the video
          and the audio.
      --audio-resampler <string> Audio resampler
          This selects which plugin to use for audio resampling.
      --audio-replay-gain-mode {none,track,album} 
                                 Replay gain mode
          Select the replay gain mode
      --audio-replay-gain-preamp <float> 
                                 Replay preamp
          This allows you to change the default target level (89 dB) for stream
          with replay gain information
      --audio-replay-gain-default <float> 
                                 Default replay gain
          This is the gain used for stream without replay gain information
      --audio-replay-gain-peak-protection, --no-audio-replay-gain-peak-protection 
                                 Peak protection (default enabled)
          Protect against sound clipping (default enabled)
      --audio-time-stretch, --no-audio-time-stretch 
                                 Enable time stretching audio (default enabled)
          This allows playing audio at lower or higher speed without affecting
          the audio pitch (default enabled)
  -A, --aout <string>            Audio output module
          This is the audio output method used by VLC. The default behavior is
          to automatically select the best method available.
      --audio-filter <string>    Audio filters
          This adds audio post processing filters, to modify the sound
          rendering.
      --audio-visual <string>    Audio visualisations
          This adds visualization modules (spectrum analyzer, etc.).

 Video
 These options allow you to modify the behaviour of the video output subsystem. You can for example enable video filters (deinterlacing, image adjusting, …). Enable these filters here and configure them in the "video filters" modules section. You can also set many miscellaneous video options.
      --video, --no-video        Enable video (default enabled)
          You can completely disable the video output. The video decoding stage
          will not take place, thus saving some processing power. (default
          enabled)
      --grayscale, --no-grayscale 
                                 Greyscale video output (default disabled)
          Output video in greyscale. As the colour information isn't decoded,
          this can save some processing power. (default disabled)
  -f, --fullscreen, --no-fullscreen 
                                 Fullscreen video output (default disabled)
          Start video in fullscreen mode (default disabled)
      --embedded-video, --no-embedded-video 
                                 Embedded video (default enabled)
          Embed the video output in the main interface. (default enabled)
      --xlib, --no-xlib           (default enabled)
      --drop-late-frames, --no-drop-late-frames 
                                 Drop late frames (default enabled)
          This drops frames that are late (arrive to the video output after
          their intended display date). (default enabled)
      --skip-frames, --no-skip-frames 
                                 Skip frames (default enabled)
          Enables framedropping on MPEG2 stream. Framedropping occurs when your
          computer is not powerful enough (default enabled)
      --quiet-synchro, --no-quiet-synchro 
                                 Quiet synchro (default disabled)
          This avoids flooding the message log with debug output from the video
          output synchronization mechanism. (default disabled)
      --keyboard-events, --no-keyboard-events 
                                 Key press events (default enabled)
          This enables VLC hotkeys from the (non-embedded) video window.
          (default enabled)
      --mouse-events, --no-mouse-events 
                                 Mouse events (default enabled)
          This enables handling of mouse clicks on the video. (default enabled)
      --overlay, --no-overlay    Overlay video output (default enabled)
          Overlay is the hardware acceleration capability of your video card
          (ability to render video directly). VLC will try to use it by
          default. (default enabled)
      --video-on-top, --no-video-on-top 
                                 Always on top (default disabled)
          Always place the video window on top of other windows. (default
          disabled)
      --video-wallpaper, --no-video-wallpaper 
                                 Enable wallpaper mode  (default disabled)
          The wallpaper mode allows you to display the video as the desktop
          background. (default disabled)
      --disable-screensaver, --no-disable-screensaver 
                                 Disable screensaver (default enabled)
          Disable the screensaver during video playback. (default enabled)
      --video-title-show, --no-video-title-show 
                                 Show media title on video (default enabled)
          Display the title of the video on top of the movie. (default enabled)
      --video-title-timeout <integer [-2147483648 .. 2147483647]> 
                                 Show video title for x milliseconds
          Show the video title for n milliseconds, default is 5000 ms (5 sec.)
      --video-title-position {0 (Centre), 1 (Left), 2 (Right), 4 (Top), 8 (Bottom), 5 (Top-Left), 6 (Top-Right), 9 (Bottom-Left), 10 (Bottom-Right)} 
                                 Position of video title
          Place on video where to display the title (default bottom center).
      --mouse-hide-timeout <integer [-2147483648 .. 2147483647]> 
                                 Hide cursor and fullscreen controller after x
                                 milliseconds
          Hide mouse cursor and fullscreen controller after n milliseconds.
   Snapshot:
      --snapshot-path <string>   Video snapshot directory (or filename)
          Directory where the video snapshots will be stored.
      --snapshot-prefix <string> Video snapshot file prefix
          Video snapshot file prefix
      --snapshot-format {png,jpg,tiff} 
                                 Video snapshot format
          Image format which will be used to store the video snapshots
      --snapshot-preview, --no-snapshot-preview 
                                 Display video snapshot preview (default
                                 enabled)
          Display the snapshot preview in the screen’s top-left corner.
          (default enabled)
      --snapshot-sequential, --no-snapshot-sequential 
                                 Use sequential numbers instead of timestamps
                                 (default disabled)
          Use sequential numbers instead of timestamps for snapshot numbering
          (default disabled)
      --snapshot-width <integer [-2147483648 .. 2147483647]> 
                                 Video snapshot width
          You can enforce the width of the video snapshot. By default it will
          keep the original width (-1). Using 0 will scale the width to keep
          the aspect ratio.
      --snapshot-height <integer [-2147483648 .. 2147483647]> 
                                 Video snapshot height
          You can enforce the height of the video snapshot. By default it will
          keep the original height (-1). Using 0 will scale the height to keep
          the aspect ratio.
   Window properties:
      --width <integer [-2147483648 .. 2147483647]> 
                                 Video width
          You can enforce the video width. By default (-1) VLC will adapt to
          the video characteristics.
      --height <integer [-2147483648 .. 2147483647]> 
                                 Video height
          You can enforce the video height. By default (-1) VLC will adapt to
          the video characteristics.
      --video-x <integer [-2147483648 .. 2147483647]> 
                                 Video X coordinate
          You can enforce the position of the top left corner of the video
          window (X coordinate).
      --video-y <integer [-2147483648 .. 2147483647]> 
                                 Video Y coordinate
          You can enforce the position of the top left corner of the video
          window (Y coordinate).
      --crop <string>            Video cropping
          This forces the cropping of the source video. Accepted formats are
          x:y (4:3, 16:9, etc.) expressing the global image aspect.
      --custom-crop-ratios <string> 
                                 Custom crop ratios list
          Comma separated list of crop ratios which will be added in the
          interface's crop ratios list.
      --aspect-ratio <string>    Source aspect ratio
          This forces the source aspect ratio. For instance, some DVDs claim to
          be 16:9 while they are actually 4:3. This can also be used as a hint
          for VLC when a movie does not have aspect ratio information. Accepted
          formats are x:y (4:3, 16:9, etc.) expressing the global image aspect,
          or a float value (1.25, 1.3333, etc.) expressing pixel squareness.
      --autoscale, --no-autoscale 
                                 Video Auto Scaling (default enabled)
          Let the video scale to fit a given window or fullscreen. (default
          enabled)
      --scale <float>            Video scaling factor
          Scaling factor used when Auto Scaling is disabled. Default value is
          1.0 (original video size).
      --monitor-par <string>     Monitor pixel aspect ratio
          This forces the monitor aspect ratio. Most monitors have square
          pixels (1:1). If you have a 16:9 screen, you might need to change
          this to 4:3 in order to keep proportions.
      --custom-aspect-ratios <string> 
                                 Custom aspect ratios list
          Comma separated list of aspect ratios which will be added in the
          interface's aspect ratio list.
      --hdtv-fix, --no-hdtv-fix  Fix HDTV height (default enabled)
          This allows proper handling of HDTV-1080 video format even if broken
          encoder incorrectly sets height to 1088 lines. You should only
          disable this option if your video has a non-standard format requiring
          all 1088 lines. (default enabled)
      --video-deco, --no-video-deco 
                                 Window decorations (default enabled)
          VLC can avoid creating window caption, frames, etc... around the
          video, giving a "minimal" window. (default enabled)
      --video-title <string>     Video title
          Custom title for the video window (in case the video is not embedded
          in the interface).
      --align {0 (Centre), 1 (Left), 2 (Right), 4 (Top), 8 (Bottom), 5 (Top-Left), 6 (Top-Right), 9 (Bottom-Left), 10 (Bottom-Right)} 
                                 Video alignment
          Enforce the alignment of the video in its window. By default (0) it
          will be centered (0=center, 1=left, 2=right, 4=top, 8=bottom, you can
          also use combinations of these values, like 6=4+2 meaning top-right).
      --zoom <float>             Zoom video
          You can zoom the video by the specified factor.
      --deinterlace {0 (Off), -1 (Automatic), 1 (On)} 
                                 Deinterlace
          Deinterlace
      --deinterlace-mode {discard,blend,mean,bob,linear,x,yadif,yadif2x,phosphor,ivtc} 
                                 Deinterlace mode
          Deinterlace method to use for video processing.
  -V, --vout <string>            Video output module
          This is the the video output method used by VLC. The default behavior
          is to automatically select the best method available.
      --video-filter <string>    Video filter module
          This adds post-processing filters to enhance the picture quality, for
          instance deinterlacing, or distort the video.
      --video-splitter <string>  Video splitter module
          This adds video splitters like clone or wall

 Subpictures
 These options allow you to modify the behavior of the subpictures subsystem. You can for example enable subpictures sources (logo, etc.). Enable these filters here and configure them in the "subsources filters" modules section. You can also set many miscellaneous subpictures options.
   On Screen Display:
      --spu, --no-spu            Enable sub-pictures (default enabled)
          You can completely disable the sub-picture processing. (default
          enabled)
      --osd, --no-osd            On Screen Display (default enabled)
          VLC can display messages on the video. This is called OSD (On Screen
          Display). (default enabled)
      --text-renderer <string>   Text rendering module
          VLC normally uses Freetype for rendering, but this allows you to use
          svg for instance.
   Subtitles:
      --sub-file <string>        Use subtitle file
          Load this subtitle file. To be used when autodetect cannot detect
          your subtitle file.
      --sub-autodetect-file, --no-sub-autodetect-file 
                                 Autodetect subtitle files (default enabled)
          Automatically detect a subtitle file, if no subtitle filename is
          specified (based on the filename of the movie). (default enabled)
      --sub-autodetect-fuzzy <integer [-2147483648 .. 2147483647]> 
                                 Subtitle auto-detection fuzziness
          This determines how fuzzy subtitle and movie filename matching will
          be. Options are: 0 = no subtitles auto-detected 1 = any subtitle file
          2 = any subtitle file containing the movie name 3 = subtitle file
          matching the movie name with additional chars 4 = subtitle file
          matching the movie name exactly
      --sub-autodetect-path <string> 
                                 Subtitle auto-detection paths
          Look for a subtitle file in those paths too, if your subtitle file
          was not found in the current directory.
      --sub-margin <integer [-2147483648 .. 2147483647]> 
                                 Force subtitle position
          You can use this option to place the subtitles under the movie,
          instead of over the movie. Try several positions.
   Overlays:
      --sub-source <string>      Subpictures source module
          This adds so-called "subpicture sources". These filters overlay some
          images or text over the video (like a logo, arbitrary text, ...).
      --sub-filter <string>      Subpictures filter module
          This adds so-called "subpicture filters". These filter subpictures
          created by subtitle decoders or other subpictures sources.
   Track settings:
      --program <integer [-2147483648 .. 2147483647]> 
                                 Programme
          Choose the program to select by giving its Service ID. Only use this
          option if you want to read a multi-program stream (like DVB streams
          for example).
      --programs <string>        Programmes
          Choose the programs to select by giving a comma-separated list of
          Service IDs (SIDs). Only use this option if you want to read a
          multi-program stream (like DVB streams for example).
      --audio-track <integer [-2147483648 .. 2147483647]> 
                                 Audio track
          Stream number of the audio track to use (from 0 to n).
      --sub-track <integer [-2147483648 .. 2147483647]> 
                                 Subtitle track
          Stream number of the subtitle track to use (from 0 to n).
      --audio-language <string>  Audio language
          Language of the audio track you want to use (comma separated, two or
          three letter country code, you may use 'none' to avoid a fallback to
          another language).
      --sub-language <string>    Subtitle language
          Language of the subtitle track you want to use (comma separated, two
          or three letters country code, you may use 'any' as a fallback).
      --menu-language <string>   Menu language
          Language of the menus you want to use with DVD/BluRay (comma
          separated, two or three letters country code, you may use 'any' as a
          fallback).
      --audio-track-id <integer [-2147483648 .. 2147483647]> 
                                 Audio track ID
          Stream ID of the audio track to use.
      --sub-track-id <integer [-2147483648 .. 2147483647]> 
                                 Subtitle track ID
          Stream ID of the subtitle track to use.
      --preferred-resolution {-1 (Best available), 1080 (Full HD (1080p)), 720 (HD (720p)), 576 (Standard Definition (576 or 480 lines)), 360 (Low Definition (360 lines)), 240 (Very Low Definition (240 lines))} 
                                 Preferred video resolution
          When several video formats are available, select one whose resolution
          is closest to (but not higher than) this setting, in number of lines.
          Use this option if you don't have enough CPU power or network
          bandwidth to play higher resolutions.
   Playback control:
      --input-repeat <integer [-2147483648 .. 2147483647]> 
                                 Input repetitions
          Number of time the same input will be repeated
      --start-time <float>       Start time
          The stream will start at this position (in seconds).
      --stop-time <float>        Stop time
          The stream will stop at this position (in seconds).
      --run-time <float>         Run time
          The stream will run this duration (in seconds).
      --input-fast-seek, --no-input-fast-seek 
                                 Fast seek (default disabled)
          Favor speed over precision while seeking (default disabled)
      --rate <float>             Playback speed
          This defines the playback speed (nominal speed is 1.0).
      --input-list <string>      Input list
          You can give a comma-separated list of inputs that will be
          concatenated together after the normal one.
      --input-slave <string>     Input slave (experimental)
          This allows you to play from several inputs at the same time. This
          feature is experimental, not all formats are supported. Use a “#”
          separated list of input.
      --bookmarks <string>       Bookmarks list for a stream
          You can manually give a list of bookmarks for a stream in the form
          "{name=bookmark-name,time=optional-time-offset,bytes=optional-byte-of
          fset},{...}"
   Default devices:
      --dvd <string>             DVD device
          This is the default DVD device to use.
      --vcd <string>             VCD device
          This is the default VCD device to use.
      --cd-audio <string>        Audio CD device
          This is the default Audio CD device to use.
   Network settings:
      --mtu <integer [-2147483648 .. 2147483647]> 
                                 MTU of the network interface
          This is the maximum application-layer packet size that can be
          transmitted over the network (in bytes).
      --ipv4-timeout <integer [-2147483648 .. 2147483647]> 
                                 TCP connection timeout
          Default TCP connection timeout (in milliseconds). 
      --http-host <string>       HTTP server address
          By default, the server will listen on any local IP address. Specify
          an IP address (e.g. ::1 or 127.0.0.1) or a host name (e.g. localhost)
          to restrict them to a specific network interface.
      --http-port <integer [1 .. 65535]> 
                                 HTTP server port
          The HTTP server will listen on this TCP port. The standard HTTP port
          number is 80. However allocation of port numbers below 1025 is
          usually restricted by the operating system.
      --https-port <integer [1 .. 65535]> 
                                 HTTPS server port
          The HTTPS server will listen on this TCP port. The standard HTTPS
          port number is 443. However allocation of port numbers below 1025 is
          usually restricted by the operating system.
      --rtsp-host <string>       RTSP server address
          This defines the address the RTSP server will listen on, along with
          the base path of the RTSP VOD media. Syntax is address/path. By
          default, the server will listen on any local IP address. Specify an
          IP address (e.g. ::1 or 127.0.0.1) or a host name (e.g. localhost) to
          restrict them to a specific network interface.
      --rtsp-port <integer [1 .. 65535]> 
                                 RTSP server port
          The RTSP server will listen on this TCP port. The standard RTSP port
          number is 554. However allocation of port numbers below 1025 is
          usually restricted by the operating system.
      --http-cert <string>       HTTP/TLS server certificate
          This X.509 certicate file (PEM format) is used for server-side TLS.
          On OS X, the string is used as a label to search the certificate in
          the keychain.
      --http-key <string>        HTTP/TLS server private key
          This private key file (PEM format) is used for server-side TLS.
      --http-ca <string>         HTTP/TLS Certificate Authority
          This X.509 certificate file (PEM format) can optionally be used to
          authenticate remote clients in TLS sessions.
      --http-crl <string>        HTTP/TLS Certificate Revocation List
          This file contains an optional CRL to prevent remote clients from
          using revoked certificates in TLS sessions.
   Socks proxy:
      --socks <string>           SOCKS server
          SOCKS proxy server to use. This must be of the form address:port. It
          will be used for all TCP connections
      --socks-user <string>      SOCKS user name
          User name to be used for connection to the SOCKS proxy.
      --socks-pwd <string>       SOCKS password
          Password to be used for connection to the SOCKS proxy.
   Metadata:
      --meta-title <string>      Title metadata
          Allows you to specify a "title" metadata for an input.
      --meta-author <string>     Author metadata
          Allows you to specify an "author" metadata for an input.
      --meta-artist <string>     Artist metadata
          Allows you to specify an "artist" metadata for an input.
      --meta-genre <string>      Genre metadata
          Allows you to specify a "genre" metadata for an input.
      --meta-copyright <string>  Copyright metadata
          Allows you to specify a "copyright" metadata for an input.
      --meta-description <string> 
                                 Description metadata
          Allows you to specify a "description" metadata for an input.
      --meta-date <string>       Date metadata
          Allows you to specify a "date" metadata for an input.
      --meta-url <string>        URL metadata
          Allows you to specify a "url" metadata for an input.
   Advanced:
      --file-caching <integer [0 .. 60000]> 
                                 File caching (ms)
          Caching value for local files, in milliseconds.
      --live-caching <integer [0 .. 60000]> 
                                 Live capture caching (ms)
          Caching value for cameras and microphones, in milliseconds.
      --disc-caching <integer [0 .. 60000]> 
                                 Disc caching (ms)
          Caching value for optical media, in milliseconds.
      --network-caching <integer [0 .. 60000]> 
                                 Network caching (ms)
          Caching value for network resources, in milliseconds.
      --cr-average <integer [-2147483648 .. 2147483647]> 
                                 Clock reference average counter
          When using the PVR input (or a very irregular source), you should set
          this to 10000.
      --clock-synchro {-1 (Default), 0 (Disable), 1 (Enable)} 
                                 Clock synchronisation
          It is possible to disable the input clock synchronisation for
          real-time sources. Use this if you experience jerky playback of
          network streams.
      --clock-jitter <integer [-2147483648 .. 2147483647]> 
                                 Clock jitter
          This defines the maximum input delay jitter that the synchronization
          algorithms should try to compensate (in milliseconds).
      --network-synchronisation, --no-network-synchronisation 
                                 Network synchronisation (default disabled)
          This allows you to remotely synchronise clocks for server and client.
          The detailed settings are available in Advanced / Network Sync.
          (default disabled)
      --input-record-path <string> 
                                 Record directory or filename
          Directory or filename where the records will be stored
      --input-record-native, --no-input-record-native 
                                 Prefer native stream recording (default
                                 enabled)
          When possible, the input stream will be recorded instead of using the
          stream output module (default enabled)
      --input-timeshift-path <string> 
                                 Timeshift directory
          Directory used to store the timeshift temporary files.
      --input-timeshift-granularity <integer [-2147483648 .. 2147483647]> 
                                 Timeshift granularity
          This is the maximum size in bytes of the temporary files that will be
          used to store the timeshifted streams.
      --input-title-format <string> 
                                 Change title according to current media
          This option allows you to set the title according to what's being
          played<br>$a: Artist<br>$b: Album<br>$c: Copyright<br>$t:
          Title<br>$g: Genre<br>$n: Track num<br>$p: Now playing<br>$A:
          Date<br>$D: Duration<br>$Z: "Now playing" (Fall back on Title -
          Artist)

 Decoders
 This option can be used to alter the way VLC selects its codecs (decompression methods). Only advanced users should alter this option as it can break playback of all your streams.
      --codec <string>           Preferred decoders list
          List of codecs that VLC will use in priority. For instance,
          “dummy,a52” will try the dummy and a52 codecs before trying the other
          ones. Only advanced users should alter this option as it can break
          playback of all your streams.
      --encoder <string>         Preferred encoders list
          This allows you to select a list of encoders that VLC will use in
          priority.

 Input
 These options allow you to modify the behaviour of the input subsystem, such as the DVD or VCD device, the network interface settings or the subtitle channel.
      --access <string>          Access module
          This allows you to force an access module. You can use it if the
          correct access is not automatically detected. You should not set this
          as a global option unless you really know what you are doing.
      --demux <string>           Demux module
          Demultiplexers are used to separate the "elementary" streams (like
          audio and video streams). You can use it if the correct demuxer is
          not automatically detected. You should not set this as a global
          option unless you really know what you are doing.
      --stream-filter <string>   Stream filter module
          Stream filters are used to modify the stream that is being read. 

 Stream output
 These options allow you to set default global options for the stream output subsystem.
      --sout <string>            Default stream output chain
          You can enter here a default stream output chain. Refer to the
          documentation to learn how to build such chains. Warning: this chain
          will be enabled for all streams.
      --sout-display, --no-sout-display 
                                 Display while streaming (default disabled)
          Play locally the stream while streaming it. (default disabled)
      --sout-keep, --no-sout-keep 
                                 Keep stream output open (default disabled)
          This allows you to keep an unique stream output instance across
          multiple playlist item (automatically insert the gather stream output
          if not specified) (default disabled)
      --sout-all, --no-sout-all  Enable streaming of all ES (default enabled)
          Stream all elementary streams (video, audio and subtitles) (default
          enabled)
      --sout-audio, --no-sout-audio 
                                 Enable audio stream output (default enabled)
          Choose whether the audio stream should be redirected to the stream
          output facility when this last one is enabled. (default enabled)
      --sout-video, --no-sout-video 
                                 Enable video stream output (default enabled)
          Choose whether the video stream should be redirected to the stream
          output facility when this last one is enabled. (default enabled)
      --sout-spu, --no-sout-spu  Enable SPU stream output (default enabled)
          Choose whether the SPU streams should be redirected to the stream
          output facility when this last one is enabled. (default enabled)
      --sout-mux-caching <integer [-2147483648 .. 2147483647]> 
                                 Stream output muxer caching (ms)
          This allow you to configure the initial caching amount for stream
          output muxer. This value should be set in milliseconds.
   VLM:
      --vlm-conf <string>        VLM configuration file
          Read a VLM configuration file as soon as VLM is started.
      --sap-interval <integer [-2147483648 .. 2147483647]> 
                                 SAP announcement interval
          When the SAP flow control is disabled, this lets you set the fixed
          interval between SAP announcements.
      --mux <string>             Mux module
          This is a legacy entry to let you configure mux modules
      --access_output <string>   Access output module
          This is a legacy entry to let you configure access output modules
      --ttl <integer [-2147483648 .. 2147483647]> 
                                 Hop limit (TTL)
          This is the hop limit (also known as "Time-To-Live" or TTL) of the
          multicast packets sent by the stream output (-1 = use operating
          system built-in default).
      --miface <string>          Multicast output interface
          Default multicast interface. This overrides the routing table.
      --dscp <integer [-2147483648 .. 2147483647]> 
                                 DiffServ Code Point
          Differentiated Services Code Point for outgoing UDP streams (or IPv4
          Type Of Service, or IPv6 Traffic Class). This is used for network
          Quality of Service.
      --packetizer <string>      Preferred packetiser list
          This allows you to select the order in which VLC will choose its
          packetisers.

 Miscellaneous
 These options allow you to select default modules. Leave these alone unless you really know what you are doing.
   Special modules:
      --vod-server <string>      VoD server module
          You can select which VoD server module you want to use. Set this to
          `vod_rtsp' to switch back to the old, legacy module.
   Plugins:
      --plugins-cache, --no-plugins-cache 
                                 Use a plugins cache (default enabled)
          Use a plugins cache which will greatly improve the startup time of
          VLC. (default enabled)
   Performance options:
      --rt-priority, --no-rt-priority 
                                 Allow real-time priority (default disabled)
          Running VLC in real-time priority will allow for much more precise
          scheduling and yield better, especially when streaming content. It
          can however lock up your whole machine, or make it very very slow.
          You should only activate this if you know what you’re doing. (default
          disabled)
      --rt-offset <integer [-2147483648 .. 2147483647]> 
                                 Adjust VLC priority
          This option adds an offset (positive or negative) to VLC default
          priorities. You can use it to tune VLC priority against other
          programs, or against other VLC instances.
      --inhibit, --no-inhibit    Inhibit the power management daemon during
                                 playback (default enabled)
          Inhibits the power management daemon during any playback, to avoid
          the computer being suspended because of inactivity. (default enabled)

 Playlist
 These options define the behaviour of the playlist. Some of them can be overridden in the playlist dialogue box.
  -Z, --random, --no-random      Play files randomly forever (default disabled)
          VLC will randomly play files in the playlist until interrupted.
          (default disabled)
  -L, --loop, --no-loop          Repeat all (default disabled)
          VLC will keep playing the playlist indefinitely. (default disabled)
  -R, --repeat, --no-repeat      Repeat current item (default disabled)
          VLC will keep playing the current playlist item. (default disabled)
      --play-and-exit, --no-play-and-exit 
                                 Play and exit (default disabled)
          Exit if there are no more items in the playlist. (default disabled)
      --play-and-stop, --no-play-and-stop 
                                 Play and stop (default disabled)
          Stop the playlist after each played playlist item. (default disabled)
      --play-and-pause, --no-play-and-pause 
                                 Play and pause (default disabled)
          Pause each item in the playlist on the last frame. (default disabled)
      --playlist-autostart, --no-playlist-autostart 
                                 Auto start (default enabled)
          Automatically start playing the playlist content once it's loaded.
          (default enabled)
      --playlist-cork, --no-playlist-cork 
                                 Pause on audio communication (default enabled)
          If pending audio communication is detected, playback will be paused
          automatically. (default enabled)
      --one-instance, --no-one-instance 
                                 Allow only one running instance (default
                                 disabled)
          Allowing only one running instance of VLC can sometimes be useful,
          for example if you associated VLC with some media types and you don't
          want a new instance of VLC to be opened each time you open a file in
          your file manager. This option will allow you to play the file with
          the already running instance or enqueue it. This option requires the
          D-Bus session daemon to be active and the running instance of VLC to
          use D-Bus control interface. (default disabled)
      --started-from-file, --no-started-from-file 
                                 VLC is started from file association (default
                                 disabled)
          Tell VLC that it is being launched due to a file association in the
          OS (default disabled)
      --one-instance-when-started-from-file, --no-one-instance-when-started-from-file 
                                 Use only one instance when started from file
                                 manager (default enabled)
          Use only one instance when started from file manager (default
          enabled)
      --playlist-enqueue, --no-playlist-enqueue 
                                 Enqueue items into playlist in one instance
                                 mode (default disabled)
          When using the one instance only option, enqueue items to playlist
          and keep playing current item. (default disabled)
      --media-library, --no-media-library 
                                 Use media library (default disabled)
          The media library is automatically saved and reloaded each time you
          start VLC. (default disabled)
      --playlist-tree, --no-playlist-tree 
                                 Display playlist tree (default disabled)
          The playlist can use a tree to categorise some items, like the
          contents of a directory. (default disabled)
      --open <string>            Default stream
          This stream will always be opened at VLC startup.
      --auto-preparse, --no-auto-preparse 
                                 Automatically preparse files (default enabled)
          Automatically preparse files added to the playlist (to retrieve some
          metadata). (default enabled)
      --metadata-network-access, --no-metadata-network-access 
                                 Allow metadata network access (default
                                 enabled)
          Allow metadata network access (default enabled)
  -S, --services-discovery <string> 
                                 Services discovery modules
          Specifies the services discovery modules to preload, separated by
          colons. Typical value is "sap".
  -v, --verbose <integer [-2147483648 .. 2147483647]> 
                                 Verbosity (0,1,2)
          This is the verbosity level (0=only errors and standard messages,
          1=warnings, 2=debug).
  -q, --quiet, --no-quiet        Be quiet (default disabled)
          Turn off all warning and information messages. (default disabled)
  -d, --daemon, --no-daemon      Run as daemon process (default disabled)
          Runs VLC as a background daemon process. (default disabled)
      --pidfile <string>         Write process id to file
          Writes process id into specified file.
      --file-logging, --no-file-logging 
                                 Log to file (default disabled)
          Log all VLC messages to a text file. (default disabled)
      --syslog, --no-syslog      Log to syslog (default disabled)
          Log all VLC messages to syslog (UNIX systems). (default disabled)
      --color, --no-color        Colour messages (default enabled)
          This enables colourisation of the messages sent to the console Your
          terminal needs Linux colour support for this to work. (default
          enabled)
      --advanced, --no-advanced  Show advanced options (default disabled)
          When this is enabled, the preferences and/or interfaces will show all
          available options, including those that most users should never
          touch. (default disabled)
      --interact, --no-interact  Interface interaction (default enabled)
          When this is enabled, the interface will show a dialog box each time
          some user input is required. (default enabled)
      --stats, --no-stats        Locally collect statistics (default disabled)
          Collect miscellaneous local statistics about the playing media.
          (default disabled)
  -I, --intf <string>            Interface module
          This is the main interface used by VLC. The default behavior is to
          automatically select the best module available.
      --extraintf <string>       Extra interface modules
          You can select "additional interfaces" for VLC. They will be launched
          in the background in addition to the default interface. Use a colon
          separated list of interface modules. (common values are "rc" (remote
          control), "http", "gestures" ...)
      --control <string>         Control interfaces
          You can select control interfaces for VLC.

 Hot keys
 These settings are the global VLC key bindings, known as "hotkeys".
      --hotkeys-mousewheel-mode {2 (Ignore), 0 (Volume Control), 1 (Position Control)} 
                                 MouseWheel up-down axis Control
          The MouseWheel up-down (vertical) axis can control volume, position
          or mousewheel event can be ignored
      --global-key-toggle-fullscreen <string> 
                                 Fullscreen
          Select the hotkey to use to swap fullscreen state.
      --key-toggle-fullscreen <string> 
                                 Fullscreen
          Select the hotkey to use to swap fullscreen state.
      --global-key-leave-fullscreen <string> 
                                 Exit fullscreen
          Select the hotkey to use to exit fullscreen state.
      --key-leave-fullscreen <string> 
                                 Exit fullscreen
          Select the hotkey to use to exit fullscreen state.
      --global-key-play-pause <string> 
                                 Play/Pause
          Select the hotkey to use to swap paused state.
      --key-play-pause <string>  Play/Pause
          Select the hotkey to use to swap paused state.
      --global-key-pause <string> 
                                 Pause only
          Select the hotkey to use to pause.
      --key-pause <string>       Pause only
          Select the hotkey to use to pause.
      --global-key-play <string> Play only
          Select the hotkey to use to play.
      --key-play <string>        Play only
          Select the hotkey to use to play.
      --global-key-faster <string> 
                                 Faster
          Select the hotkey to use for fast forward playback.
      --key-faster <string>      Faster
          Select the hotkey to use for fast forward playback.
      --global-key-slower <string> 
                                 Slower
          Select the hotkey to use for slow motion playback.
      --key-slower <string>      Slower
          Select the hotkey to use for slow motion playback.
      --global-key-rate-normal <string> 
                                 Normal rate
          Select the hotkey to set the playback rate back to normal.
      --key-rate-normal <string> Normal rate
          Select the hotkey to set the playback rate back to normal.
      --global-key-rate-faster-fine <string> 
                                 Faster (fine)
          Select the hotkey to use for fast forward playback.
      --key-rate-faster-fine <string> 
                                 Faster (fine)
          Select the hotkey to use for fast forward playback.
      --global-key-rate-slower-fine <string> 
                                 Slower (fine)
          Select the hotkey to use for slow motion playback.
      --key-rate-slower-fine <string> 
                                 Slower (fine)
          Select the hotkey to use for slow motion playback.
      --global-key-next <string> Next
          Select the hotkey to use to skip to the next item in the playlist.
      --key-next <string>        Next
          Select the hotkey to use to skip to the next item in the playlist.
      --global-key-prev <string> Previous
          Select the hotkey to use to skip to the previous item in the
          playlist.
      --key-prev <string>        Previous
          Select the hotkey to use to skip to the previous item in the
          playlist.
      --global-key-stop <string> Stop
          Select the hotkey to stop playback.
      --key-stop <string>        Stop
          Select the hotkey to stop playback.
      --global-key-position <string> 
                                 Position
          Select the hotkey to display the position.
      --key-position <string>    Position
          Select the hotkey to display the position.
      --global-key-jump-extrashort <string> 
                                 Very short backwards jump
          Select the hotkey to make a very short backwards jump.
      --key-jump-extrashort <string> 
                                 Very short backwards jump
          Select the hotkey to make a very short backwards jump.
      --global-key-jump+extrashort <string> 
                                 Very short forward jump
          Select the hotkey to make a very short forward jump.
      --key-jump+extrashort <string> 
                                 Very short forward jump
          Select the hotkey to make a very short forward jump.
      --global-key-jump-short <string> 
                                 Short backwards jump
          Select the hotkey to make a short backwards jump.
      --key-jump-short <string>  Short backwards jump
          Select the hotkey to make a short backwards jump.
      --global-key-jump+short <string> 
                                 Short forward jump
          Select the hotkey to make a short forward jump.
      --key-jump+short <string>  Short forward jump
          Select the hotkey to make a short forward jump.
      --global-key-jump-medium <string> 
                                 Medium backwards jump
          Select the hotkey to make a medium backwards jump.
      --key-jump-medium <string> Medium backwards jump
          Select the hotkey to make a medium backwards jump.
      --global-key-jump+medium <string> 
                                 Medium forward jump
          Select the hotkey to make a medium forward jump.
      --key-jump+medium <string> Medium forward jump
          Select the hotkey to make a medium forward jump.
      --global-key-jump-long <string> 
                                 Long backwards jump
          Select the hotkey to make a long backwards jump.
      --key-jump-long <string>   Long backwards jump
          Select the hotkey to make a long backwards jump.
      --global-key-jump+long <string> 
                                 Long forward jump
          Select the hotkey to make a long forward jump.
      --key-jump+long <string>   Long forward jump
          Select the hotkey to make a long forward jump.
      --global-key-frame-next <string> 
                                 Next frame
          Select the hotkey to got to the next video frame.
      --key-frame-next <string>  Next frame
          Select the hotkey to got to the next video frame.
      --global-key-nav-activate <string> 
                                 Activate
          Select the key to activate selected item in DVD menus.
      --key-nav-activate <string> 
                                 Activate
          Select the key to activate selected item in DVD menus.
      --global-key-nav-up <string> 
                                 Navigate up
          Select the key to move the selector up in DVD menus.
      --key-nav-up <string>      Navigate up
          Select the key to move the selector up in DVD menus.
      --global-key-nav-down <string> 
                                 Navigate down
          Select the key to move the selector down in DVD menus.
      --key-nav-down <string>    Navigate down
          Select the key to move the selector down in DVD menus.
      --global-key-nav-left <string> 
                                 Navigate left
          Select the key to move the selector left in DVD menus.
      --key-nav-left <string>    Navigate left
          Select the key to move the selector left in DVD menus.
      --global-key-nav-right <string> 
                                 Navigate right
          Select the key to move the selector right in DVD menus.
      --key-nav-right <string>   Navigate right
          Select the key to move the selector right in DVD menus.
      --global-key-disc-menu <string> 
                                 Go to the DVD menu
          Select the key to take you to the DVD menu
      --key-disc-menu <string>   Go to the DVD menu
          Select the key to take you to the DVD menu
      --global-key-title-prev <string> 
                                 Select previous DVD title
          Select the key to choose the previous title from the DVD
      --key-title-prev <string>  Select previous DVD title
          Select the key to choose the previous title from the DVD
      --global-key-title-next <string> 
                                 Select next DVD title
          Select the key to choose the next title from the DVD
      --key-title-next <string>  Select next DVD title
          Select the key to choose the next title from the DVD
      --global-key-chapter-prev <string> 
                                 Select prev DVD chapter
          Select the key to choose the previous chapter from the DVD
      --key-chapter-prev <string> 
                                 Select prev DVD chapter
          Select the key to choose the previous chapter from the DVD
      --global-key-chapter-next <string> 
                                 Select next DVD chapter
          Select the key to choose the next chapter from the DVD
      --key-chapter-next <string> 
                                 Select next DVD chapter
          Select the key to choose the next chapter from the DVD
      --global-key-quit <string> Quit
          Select the hotkey to quit the application.
      --key-quit <string>        Quit
          Select the hotkey to quit the application.
      --global-key-vol-up <string> 
                                 Volume up
          Select the key to increase audio volume.
      --key-vol-up <string>      Volume up
          Select the key to increase audio volume.
      --global-key-vol-down <string> 
                                 Volume down
          Select the key to decrease audio volume.
      --key-vol-down <string>    Volume down
          Select the key to decrease audio volume.
      --global-key-vol-mute <string> 
                                 Mute
          Select the key to mute audio.
      --key-vol-mute <string>    Mute
          Select the key to mute audio.
      --global-key-subdelay-up <string> 
                                 Subtitle delay up
          Select the key to increase the subtitle delay.
      --key-subdelay-up <string> Subtitle delay up
          Select the key to increase the subtitle delay.
      --global-key-subdelay-down <string> 
                                 Subtitle delay down
          Select the key to decrease the subtitle delay.
      --key-subdelay-down <string> 
                                 Subtitle delay down
          Select the key to decrease the subtitle delay.
      --global-key-subsync-markaudio <string> 
                                 Subtitle sync / bookmark audio timestamp
          Select the key to bookmark audio timestamp when syncing subtitles.
      --key-subsync-markaudio <string> 
                                 Subtitle sync / bookmark audio timestamp
          Select the key to bookmark audio timestamp when syncing subtitles.
      --global-key-subsync-marksub <string> 
                                 Subtitle sync / bookmark subtitle timestamp
          Select the key to bookmark subtitle timestamp when syncing subtitles.
      --key-subsync-marksub <string> 
                                 Subtitle sync / bookmark subtitle timestamp
          Select the key to bookmark subtitle timestamp when syncing subtitles.
      --global-key-subsync-apply <string> 
                                 Subtitle sync / synchronise audio & subtitle
                                 timestamps
          Select the key to synchronise bookmarked audio & subtitle timestamps.
      --key-subsync-apply <string> 
                                 Subtitle sync / synchronise audio & subtitle
                                 timestamps
          Select the key to synchronise bookmarked audio & subtitle timestamps.
      --global-key-subsync-reset <string> 
                                 Subtitle sync / reset audio & subtitle
                                 synchronization
          Select the key to reset synchronization of audio & subtitle
          timestamps.
      --key-subsync-reset <string> 
                                 Subtitle sync / reset audio & subtitle
                                 synchronization
          Select the key to reset synchronization of audio & subtitle
          timestamps.
      --global-key-subpos-up <string> 
                                 Subtitle position up
          Select the key to move subtitles higher.
      --key-subpos-up <string>   Subtitle position up
          Select the key to move subtitles higher.
      --global-key-subpos-down <string> 
                                 Subtitle position down
          Select the key to move subtitles lower.
      --key-subpos-down <string> Subtitle position down
          Select the key to move subtitles lower.
      --global-key-audiodelay-up <string> 
                                 Audio delay up
          Select the key to increase the audio delay.
      --key-audiodelay-up <string> 
                                 Audio delay up
          Select the key to increase the audio delay.
      --global-key-audiodelay-down <string> 
                                 Audio delay down
          Select the key to decrease the audio delay.
      --key-audiodelay-down <string> 
                                 Audio delay down
          Select the key to decrease the audio delay.
      --global-key-audio-track <string> 
                                 Cycle audio track
          Cycle through the available audio tracks(languages).
      --key-audio-track <string> Cycle audio track
          Cycle through the available audio tracks(languages).
      --global-key-audiodevice-cycle <string> 
                                 Cycle through audio devices
          Cycle through available audio devices
      --key-audiodevice-cycle <string> 
                                 Cycle through audio devices
          Cycle through available audio devices
      --global-key-subtitle-track <string> 
                                 Cycle subtitle track
          Cycle through the available subtitle tracks.
      --key-subtitle-track <string> 
                                 Cycle subtitle track
          Cycle through the available subtitle tracks.
      --global-key-subtitle-toggle <string> 
                                 Toggle subtitles
          Toggle subtitle track visibility.
      --key-subtitle-toggle <string> 
                                 Toggle subtitles
          Toggle subtitle track visibility.
      --global-key-program-sid-next <string> 
                                 Cycle next program Service ID
          Cycle through the available next program Service IDs (SIDs).
      --key-program-sid-next <string> 
                                 Cycle next program Service ID
          Cycle through the available next program Service IDs (SIDs).
      --global-key-program-sid-prev <string> 
                                 Cycle previous program Service ID
          Cycle through the available previous program Service IDs (SIDs).
      --key-program-sid-prev <string> 
                                 Cycle previous program Service ID
          Cycle through the available previous program Service IDs (SIDs).
      --global-key-aspect-ratio <string> 
                                 Cycle source aspect ratio
          Cycle through a predefined list of source aspect ratios.
      --key-aspect-ratio <string> 
                                 Cycle source aspect ratio
          Cycle through a predefined list of source aspect ratios.
      --global-key-crop <string> Cycle video crop
          Cycle through a predefined list of crop formats.
      --key-crop <string>        Cycle video crop
          Cycle through a predefined list of crop formats.
      --global-key-toggle-autoscale <string> 
                                 Toggle autoscaling
          Activate or deactivate autoscaling.
      --key-toggle-autoscale <string> 
                                 Toggle autoscaling
          Activate or deactivate autoscaling.
      --global-key-incr-scalefactor <string> 
                                 Increase scale factor
          Increase scale factor
      --key-incr-scalefactor <string> 
                                 Increase scale factor
          Increase scale factor
      --global-key-decr-scalefactor <string> 
                                 Decrease scale factor
          Decrease scale factor
      --key-decr-scalefactor <string> 
                                 Decrease scale factor
          Decrease scale factor
      --global-key-deinterlace <string> 
                                 Toggle deinterlacing
          Activate or deactivate deinterlacing.
      --key-deinterlace <string> Toggle deinterlacing
          Activate or deactivate deinterlacing.
      --global-key-deinterlace-mode <string> 
                                 Cycle deinterlace modes
          Cycle through available deinterlace modes.
      --key-deinterlace-mode <string> 
                                 Cycle deinterlace modes
          Cycle through available deinterlace modes.
      --global-key-intf-show <string> 
                                 Show controller in fullscreen
          Show controller in fullscreen
      --key-intf-show <string>   Show controller in fullscreen
          Show controller in fullscreen
      --global-key-intf-boss <string> 
                                 Boss key
          Hide the interface and pause playback.
      --key-intf-boss <string>   Boss key
          Hide the interface and pause playback.
      --global-key-intf-popup-menu <string> 
                                 Context menu
          Show the contextual popup menu.
      --key-intf-popup-menu <string> 
                                 Context menu
          Show the contextual popup menu.
      --global-key-snapshot <string> 
                                 Take video snapshot
          Takes a video snapshot and writes it to disk.
      --key-snapshot <string>    Take video snapshot
          Takes a video snapshot and writes it to disk.
      --global-key-record <string> 
                                 Record
          Record access filter start/stop.
      --key-record <string>      Record
          Record access filter start/stop.
      --global-key-zoom <string> Zoom
          Zoom
      --key-zoom <string>        Zoom
          Zoom
      --global-key-unzoom <string> 
                                 Un-Zoom
          Un-Zoom
      --key-unzoom <string>      Un-Zoom
          Un-Zoom
      --global-key-wallpaper <string> 
                                 Toggle wallpaper mode in video output
          Toggle wallpaper mode in video output.
      --key-wallpaper <string>   Toggle wallpaper mode in video output
          Toggle wallpaper mode in video output.
      --global-key-crop-top <string> 
                                 Crop one pixel from the top of the video
          Crop one pixel from the top of the video
      --key-crop-top <string>    Crop one pixel from the top of the video
          Crop one pixel from the top of the video
      --global-key-uncrop-top <string> 
                                 Uncrop one pixel from the top of the video
          Uncrop one pixel from the top of the video
      --key-uncrop-top <string>  Uncrop one pixel from the top of the video
          Uncrop one pixel from the top of the video
      --global-key-crop-left <string> 
                                 Crop one pixel from the left of the video
          Crop one pixel from the left of the video
      --key-crop-left <string>   Crop one pixel from the left of the video
          Crop one pixel from the left of the video
      --global-key-uncrop-left <string> 
                                 Uncrop one pixel from the left of the video
          Uncrop one pixel from the left of the video
      --key-uncrop-left <string> Uncrop one pixel from the left of the video
          Uncrop one pixel from the left of the video
      --global-key-crop-bottom <string> 
                                 Crop one pixel from the bottom of the video
          Crop one pixel from the bottom of the video
      --key-crop-bottom <string> Crop one pixel from the bottom of the video
          Crop one pixel from the bottom of the video
      --global-key-uncrop-bottom <string> 
                                 Uncrop one pixel from the bottom of the video
          Uncrop one pixel from the bottom of the video
      --key-uncrop-bottom <string> 
                                 Uncrop one pixel from the bottom of the video
          Uncrop one pixel from the bottom of the video
      --global-key-crop-right <string> 
                                 Crop one pixel from the right of the video
          Crop one pixel from the right of the video
      --key-crop-right <string>  Crop one pixel from the right of the video
          Crop one pixel from the right of the video
      --global-key-uncrop-right <string> 
                                 Uncrop one pixel from the right of the video
          Uncrop one pixel from the right of the video
      --key-uncrop-right <string> 
                                 Uncrop one pixel from the right of the video
          Uncrop one pixel from the right of the video
      --global-key-random <string> 
                                 Random
          Toggle random playlist playback
      --key-random <string>      Random
          Toggle random playlist playback
      --global-key-loop <string> Normal/Loop/Repeat
          Toggle Normal/Loop/Repeat playlist modes
      --key-loop <string>        Normal/Loop/Repeat
          Toggle Normal/Loop/Repeat playlist modes
   Zoom:
      --global-key-zoom-quarter <string> 
                                 1:4 Quarter
      --key-zoom-quarter <string> 
                                 1:4 Quarter
      --global-key-zoom-half <string> 
                                 1:2 Half
      --key-zoom-half <string>   1:2 Half
      --global-key-zoom-original <string> 
                                 1:1 Original
      --key-zoom-original <string> 
                                 1:1 Original
      --global-key-zoom-double <string> 
                                 2:1 Double
      --key-zoom-double <string> 2:1 Double
   Jump sizes:
      --extrashort-jump-size <integer [-2147483648 .. 2147483647]> 
                                 Very short jump length
          Very short jump length, in seconds.
      --short-jump-size <integer [-2147483648 .. 2147483647]> 
                                 Short jump length
          Short jump length, in seconds.
      --medium-jump-size <integer [-2147483648 .. 2147483647]> 
                                 Medium jump length
          Medium jump length, in seconds.
      --long-jump-size <integer [-2147483648 .. 2147483647]> 
                                 Long jump length
          Long jump length, in seconds.
      --global-key-set-bookmark1 <string> 
                                 Set playlist bookmark 1
          Select the key to set this playlist bookmark.
      --key-set-bookmark1 <string> 
                                 Set playlist bookmark 1
          Select the key to set this playlist bookmark.
      --global-key-set-bookmark2 <string> 
                                 Set playlist bookmark 2
          Select the key to set this playlist bookmark.
      --key-set-bookmark2 <string> 
                                 Set playlist bookmark 2
          Select the key to set this playlist bookmark.
      --global-key-set-bookmark3 <string> 
                                 Set playlist bookmark 3
          Select the key to set this playlist bookmark.
      --key-set-bookmark3 <string> 
                                 Set playlist bookmark 3
          Select the key to set this playlist bookmark.
      --global-key-set-bookmark4 <string> 
                                 Set playlist bookmark 4
          Select the key to set this playlist bookmark.
      --key-set-bookmark4 <string> 
                                 Set playlist bookmark 4
          Select the key to set this playlist bookmark.
      --global-key-set-bookmark5 <string> 
                                 Set playlist bookmark 5
          Select the key to set this playlist bookmark.
      --key-set-bookmark5 <string> 
                                 Set playlist bookmark 5
          Select the key to set this playlist bookmark.
      --global-key-set-bookmark6 <string> 
                                 Set playlist bookmark 6
          Select the key to set this playlist bookmark.
      --key-set-bookmark6 <string> 
                                 Set playlist bookmark 6
          Select the key to set this playlist bookmark.
      --global-key-set-bookmark7 <string> 
                                 Set playlist bookmark 7
          Select the key to set this playlist bookmark.
      --key-set-bookmark7 <string> 
                                 Set playlist bookmark 7
          Select the key to set this playlist bookmark.
      --global-key-set-bookmark8 <string> 
                                 Set playlist bookmark 8
          Select the key to set this playlist bookmark.
      --key-set-bookmark8 <string> 
                                 Set playlist bookmark 8
          Select the key to set this playlist bookmark.
      --global-key-set-bookmark9 <string> 
                                 Set playlist bookmark 9
          Select the key to set this playlist bookmark.
      --key-set-bookmark9 <string> 
                                 Set playlist bookmark 9
          Select the key to set this playlist bookmark.
      --global-key-set-bookmark10 <string> 
                                 Set playlist bookmark 10
          Select the key to set this playlist bookmark.
      --key-set-bookmark10 <string> 
                                 Set playlist bookmark 10
          Select the key to set this playlist bookmark.
      --global-key-play-bookmark1 <string> 
                                 Play playlist bookmark 1
          Select the key to play this bookmark.
      --key-play-bookmark1 <string> 
                                 Play playlist bookmark 1
          Select the key to play this bookmark.
      --global-key-play-bookmark2 <string> 
                                 Play playlist bookmark 2
          Select the key to play this bookmark.
      --key-play-bookmark2 <string> 
                                 Play playlist bookmark 2
          Select the key to play this bookmark.
      --global-key-play-bookmark3 <string> 
                                 Play playlist bookmark 3
          Select the key to play this bookmark.
      --key-play-bookmark3 <string> 
                                 Play playlist bookmark 3
          Select the key to play this bookmark.
      --global-key-play-bookmark4 <string> 
                                 Play playlist bookmark 4
          Select the key to play this bookmark.
      --key-play-bookmark4 <string> 
                                 Play playlist bookmark 4
          Select the key to play this bookmark.
      --global-key-play-bookmark5 <string> 
                                 Play playlist bookmark 5
          Select the key to play this bookmark.
      --key-play-bookmark5 <string> 
                                 Play playlist bookmark 5
          Select the key to play this bookmark.
      --global-key-play-bookmark6 <string> 
                                 Play playlist bookmark 6
          Select the key to play this bookmark.
      --key-play-bookmark6 <string> 
                                 Play playlist bookmark 6
          Select the key to play this bookmark.
      --global-key-play-bookmark7 <string> 
                                 Play playlist bookmark 7
          Select the key to play this bookmark.
      --key-play-bookmark7 <string> 
                                 Play playlist bookmark 7
          Select the key to play this bookmark.
      --global-key-play-bookmark8 <string> 
                                 Play playlist bookmark 8
          Select the key to play this bookmark.
      --key-play-bookmark8 <string> 
                                 Play playlist bookmark 8
          Select the key to play this bookmark.
      --global-key-play-bookmark9 <string> 
                                 Play playlist bookmark 9
          Select the key to play this bookmark.
      --key-play-bookmark9 <string> 
                                 Play playlist bookmark 9
          Select the key to play this bookmark.
      --global-key-play-bookmark10 <string> 
                                 Play playlist bookmark 10
          Select the key to play this bookmark.
      --key-play-bookmark10 <string> 
                                 Play playlist bookmark 10
          Select the key to play this bookmark.
      --global-key-clear-playlist <string> 
                                 Clear the playlist
          Select the key to clear the current playlist.
      --key-clear-playlist <string> 
                                 Clear the playlist
          Select the key to clear the current playlist.
      --bookmark1 <string>       Playlist bookmark 1
          This allows you to define playlist bookmarks.
      --bookmark2 <string>       Playlist bookmark 2
          This allows you to define playlist bookmarks.
      --bookmark3 <string>       Playlist bookmark 3
          This allows you to define playlist bookmarks.
      --bookmark4 <string>       Playlist bookmark 4
          This allows you to define playlist bookmarks.
      --bookmark5 <string>       Playlist bookmark 5
          This allows you to define playlist bookmarks.
      --bookmark6 <string>       Playlist bookmark 6
          This allows you to define playlist bookmarks.
      --bookmark7 <string>       Playlist bookmark 7
          This allows you to define playlist bookmarks.
      --bookmark8 <string>       Playlist bookmark 8
          This allows you to define playlist bookmarks.
      --bookmark9 <string>       Playlist bookmark 9
          This allows you to define playlist bookmarks.
      --bookmark10 <string>      Playlist bookmark 10
          This allows you to define playlist bookmarks.
  -h, --help, --no-help          print help for VLC (can be combined with
                                 --advanced and --help-verbose) (default
                                 disabled)
  -H, --full-help, --no-full-help 
                                 Exhaustive help for VLC and its modules
                                 (default disabled)
      --longhelp, --no-longhelp  print help for VLC and all its modules (can be
                                 combined with --advanced and --help-verbose)
                                 (default disabled)
      --help-verbose, --no-help-verbose 
                                 ask for extra verbosity when displaying help
                                 (default disabled)
  -l, --list, --no-list          print a list of available modules (default
                                 disabled)
      --list-verbose, --no-list-verbose 
                                 print a list of available modules with extra
                                 detail (default disabled)
  -p, --module <string>          print help on a specific module (can be
                                 combined with --advanced and --help-verbose).
                                 Prefix the module name with = for strict
                                 matches.
      --ignore-config, --no-ignore-config 
                                 no configuration option will be loaded nor
                                 saved to config file (default enabled)
      --reset-config, --no-reset-config 
                                 reset the current config to the default values
                                 (default disabled)
      --reset-plugins-cache, --no-reset-plugins-cache 
                                 resets the current plugins cache (default
                                 disabled)
      --version, --no-version    print version information (default disabled)
      --config <string>          use alternate config file

Note: 3 modules were not displayed because they only have advanced options.
