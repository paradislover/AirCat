bin_PROGRAMS = aircat

aircat_SOURCES = main.c \
		 config_file.c \
		 httpd.c \
		 airtunes.c \
		 avahi.c \
		 http.c \
		 file.c \
		 shoutcast.c \
		 rtsp.c \
		 rtp.c \
		 sdp.c \
		 raop_tcp.c \
		 raop.c \
		 decoder.c \
	 	 decoder_aac.c \
		 decoder_mp3.c \
		 decoder_alac.c \
		 resample.c \
		 alsa.c

aircat_LDADD = $(libssl_LIBS) $(libmad_LIBS) $(libsoxr_LIBS) $(libasound2_LIBS) $(libavahi_LIBS) $(libmicrohttpd_LIBS) -lpthread

AM_CPPFLAGS =  $(libssl_CFLAGS) $(libmad_CFLAGS) $(libsoxr_CFLAGS) $(libasound2_CFLAGS) $(libavahi_CFLAGS) $(libmicrohttpd_CFLAGS) -Wall

EXTRA_DIST = http.h \
	     config_file.h \
	     httpd.h \
	     airtunes.h \
	     avahi.h \
	     file.h \
	     shoutcast.h \
	     rtsp.h \
	     rtp.h \
	     sdp.h \
	     raop_tcp.h \
	     raop.h \
	     decoder.h \
	     decoder_aac.h \
	     decoder_mp3.h \
	     decoder_alac.h \
	     resample.h \
	     alsa.h

