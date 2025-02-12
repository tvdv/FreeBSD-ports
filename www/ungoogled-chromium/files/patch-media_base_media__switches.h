--- media/base/media_switches.h.orig	2023-11-04 07:08:51 UTC
+++ media/base/media_switches.h
@@ -319,7 +319,7 @@ MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseElementInsteadOf
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseFakeDeviceForMediaStream);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseMediaHistoryStore);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseR16Texture);
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVideoDecodeLinux);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVideoDecodeLinuxGL);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVideoEncodeLinux);
@@ -338,7 +338,7 @@ MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVp8TemporalLay
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVp9kSVCHWEncoding);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kVaapiVp9SModeHWEncoding);
 #endif  // defined(ARCH_CPU_X86_FAMILY) && BUILDFLAG(IS_CHROMEOS)
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kV4L2FlatStatelessVideoDecoder);
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kV4L2FlatStatefulVideoDecoder);
 #endif  // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
@@ -458,7 +458,7 @@ MEDIA_EXPORT BASE_DECLARE_FEATURE(kExposeOutOfProcessV
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseOutOfProcessVideoDecoding);
 #endif  // BUILDFLAG(ALLOW_OOP_VIDEO_DECODER)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 MEDIA_EXPORT BASE_DECLARE_FEATURE(kUseOutOfProcessVideoEncoding);
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 
