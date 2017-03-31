# Microsoft Developer Studio Generated NMAKE File, Format Version 4.20
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

!IF "$(CFG)" == ""
CFG=OxoMemory - Win32 Debug
!MESSAGE No configuration specified.  Defaulting to OxoMemory - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "OxoMemory - Win32 Release" && "$(CFG)" !=\
 "OxoMemory - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE on this makefile
!MESSAGE by defining the macro CFG on the command line.  For example:
!MESSAGE 
!MESSAGE NMAKE /f "OxoMemory.mak" CFG="OxoMemory - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "OxoMemory - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "OxoMemory - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 
################################################################################
# Begin Project
# PROP Target_Last_Scanned "OxoMemory - Win32 Release"
CPP=cl.exe
MTL=mktyplib.exe
RSC=rc.exe

!IF  "$(CFG)" == "OxoMemory - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
OUTDIR=.\Release
INTDIR=.\Release

ALL : "$(OUTDIR)\OxoMemory.exe"

CLEAN : 
	-@erase "$(INTDIR)\AboutOxo.obj"
	-@erase "$(INTDIR)\BmpButton.obj"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\MDIClient.obj"
	-@erase "$(INTDIR)\MemoryWindow.obj"
	-@erase "$(INTDIR)\OXOButton.obj"
	-@erase "$(INTDIR)\OxoMemory.obj"
	-@erase "$(INTDIR)\OxoMemory.pch"
	-@erase "$(INTDIR)\OxoMemory.res"
	-@erase "$(INTDIR)\OXOWindow.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(OUTDIR)\OxoMemory.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)/OxoMemory.pch" /Yu"stdafx.h" /Fo"$(INTDIR)/"\
 /c 
CPP_OBJS=.\Release/
CPP_SBRS=.\.
# ADD BASE MTL /nologo /D "NDEBUG" /win32
# ADD MTL /nologo /D "NDEBUG" /win32
MTL_PROJ=/nologo /D "NDEBUG" /win32 
# ADD BASE RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
RSC_PROJ=/l 0x409 /fo"$(INTDIR)/OxoMemory.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/OxoMemory.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 winmm.lib /nologo /subsystem:windows /machine:I386
LINK32_FLAGS=winmm.lib /nologo /subsystem:windows /incremental:no\
 /pdb:"$(OUTDIR)/OxoMemory.pdb" /machine:I386 /out:"$(OUTDIR)/OxoMemory.exe" 
LINK32_OBJS= \
	"$(INTDIR)\AboutOxo.obj" \
	"$(INTDIR)\BmpButton.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\MDIClient.obj" \
	"$(INTDIR)\MemoryWindow.obj" \
	"$(INTDIR)\OXOButton.obj" \
	"$(INTDIR)\OxoMemory.obj" \
	"$(INTDIR)\OxoMemory.res" \
	"$(INTDIR)\OXOWindow.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\OxoMemory.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "OxoMemory - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
OUTDIR=.\Debug
INTDIR=.\Debug

ALL : "$(OUTDIR)\OxoMemory.exe"

CLEAN : 
	-@erase "$(INTDIR)\AboutOxo.obj"
	-@erase "$(INTDIR)\BmpButton.obj"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\MDIClient.obj"
	-@erase "$(INTDIR)\MemoryWindow.obj"
	-@erase "$(INTDIR)\OXOButton.obj"
	-@erase "$(INTDIR)\OxoMemory.obj"
	-@erase "$(INTDIR)\OxoMemory.pch"
	-@erase "$(INTDIR)\OxoMemory.res"
	-@erase "$(INTDIR)\OXOWindow.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc40.idb"
	-@erase "$(INTDIR)\vc40.pdb"
	-@erase "$(OUTDIR)\OxoMemory.exe"
	-@erase "$(OUTDIR)\OxoMemory.ilk"
	-@erase "$(OUTDIR)\OxoMemory.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
CPP_PROJ=/nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)/OxoMemory.pch" /Yu"stdafx.h"\
 /Fo"$(INTDIR)/" /Fd"$(INTDIR)/" /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.\.
# ADD BASE MTL /nologo /D "_DEBUG" /win32
# ADD MTL /nologo /D "_DEBUG" /win32
MTL_PROJ=/nologo /D "_DEBUG" /win32 
# ADD BASE RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
RSC_PROJ=/l 0x409 /fo"$(INTDIR)/OxoMemory.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/OxoMemory.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386
# ADD LINK32 winmm.lib /nologo /subsystem:windows /debug /machine:I386
LINK32_FLAGS=winmm.lib /nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)/OxoMemory.pdb" /debug /machine:I386\
 /out:"$(OUTDIR)/OxoMemory.exe" 
LINK32_OBJS= \
	"$(INTDIR)\AboutOxo.obj" \
	"$(INTDIR)\BmpButton.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\MDIClient.obj" \
	"$(INTDIR)\MemoryWindow.obj" \
	"$(INTDIR)\OXOButton.obj" \
	"$(INTDIR)\OxoMemory.obj" \
	"$(INTDIR)\OxoMemory.res" \
	"$(INTDIR)\OXOWindow.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\OxoMemory.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.c{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

################################################################################
# Begin Target

# Name "OxoMemory - Win32 Release"
# Name "OxoMemory - Win32 Debug"

!IF  "$(CFG)" == "OxoMemory - Win32 Release"

!ELSEIF  "$(CFG)" == "OxoMemory - Win32 Debug"

!ENDIF 

################################################################################
# Begin Source File

SOURCE=.\OxoMemory.cpp
DEP_CPP_OXOME=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\OxoMemory.obj" : $(SOURCE) $(DEP_CPP_OXOME) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


# End Source File
################################################################################
# Begin Source File

SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "OxoMemory - Win32 Release"

# ADD CPP /Yc"stdafx.h"

BuildCmds= \
	$(CPP) /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)/OxoMemory.pch" /Yc"stdafx.h" /Fo"$(INTDIR)/"\
 /c $(SOURCE) \
	

"$(INTDIR)\StdAfx.obj" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

"$(INTDIR)\OxoMemory.pch" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

!ELSEIF  "$(CFG)" == "OxoMemory - Win32 Debug"

# ADD CPP /Yc"stdafx.h"

BuildCmds= \
	$(CPP) /nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)/OxoMemory.pch" /Yc"stdafx.h"\
 /Fo"$(INTDIR)/" /Fd"$(INTDIR)/" /c $(SOURCE) \
	

"$(INTDIR)\StdAfx.obj" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

"$(INTDIR)\OxoMemory.pch" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\MainFrm.cpp

!IF  "$(CFG)" == "OxoMemory - Win32 Release"

DEP_CPP_MAINF=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\MainFrm.obj" : $(SOURCE) $(DEP_CPP_MAINF) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


!ELSEIF  "$(CFG)" == "OxoMemory - Win32 Debug"

DEP_CPP_MAINF=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\MainFrm.obj" : $(SOURCE) $(DEP_CPP_MAINF) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\OxoMemory.rc
DEP_RSC_OXOMEM=\
	".\nodrop.cur"\
	".\res\appicon.ico"\
	".\res\bitmap1.bmp"\
	".\res\bitmap2.bmp"\
	".\res\bmp00001.bmp"\
	".\res\hand_dow.cur"\
	".\res\hand_up.cur"\
	".\res\ico00001.ico"\
	".\res\icon1.ico"\
	".\res\idb0.bmp"\
	".\res\idb1.bmp"\
	".\res\idb10.bmp"\
	".\res\idb11.bmp"\
	".\res\idb12.bmp"\
	".\res\idb13.bmp"\
	".\res\idb14.bmp"\
	".\res\idb2.bmp"\
	".\res\idb3.bmp"\
	".\res\idb4.bmp"\
	".\res\idb5.bmp"\
	".\res\idb6.bmp"\
	".\res\idb7.bmp"\
	".\res\idb8.bmp"\
	".\res\idb9.bmp"\
	".\res\OxoMemory.rc2"\
	".\Waves\5TH.WAV"\
	".\Waves\APPLAUSE.WAV"\
	".\Waves\CHA1.WAV"\
	".\Waves\DRIP.WAV"\
	".\Waves\OHOH.WAV"\
	".\Waves\SCHLKAUF.WAV"\
	

"$(INTDIR)\OxoMemory.res" : $(SOURCE) $(DEP_RSC_OXOMEM) "$(INTDIR)"
   $(RSC) $(RSC_PROJ) $(SOURCE)


# End Source File
################################################################################
# Begin Source File

SOURCE=.\OXOWindow.cpp
DEP_CPP_OXOWI=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\OXOWindow.obj" : $(SOURCE) $(DEP_CPP_OXOWI) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


# End Source File
################################################################################
# Begin Source File

SOURCE=.\MemoryWindow.cpp
DEP_CPP_MEMOR=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\MemoryWindow.obj" : $(SOURCE) $(DEP_CPP_MEMOR) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


# End Source File
################################################################################
# Begin Source File

SOURCE=.\OXOButton.cpp

!IF  "$(CFG)" == "OxoMemory - Win32 Release"

DEP_CPP_OXOBU=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\OXOButton.obj" : $(SOURCE) $(DEP_CPP_OXOBU) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


!ELSEIF  "$(CFG)" == "OxoMemory - Win32 Debug"

DEP_CPP_OXOBU=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\OXOButton.obj" : $(SOURCE) $(DEP_CPP_OXOBU) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\MDIClient.cpp

!IF  "$(CFG)" == "OxoMemory - Win32 Release"

DEP_CPP_MDICL=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\MDIClient.obj" : $(SOURCE) $(DEP_CPP_MDICL) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


!ELSEIF  "$(CFG)" == "OxoMemory - Win32 Debug"

DEP_CPP_MDICL=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\MDIClient.obj" : $(SOURCE) $(DEP_CPP_MDICL) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\BmpButton.cpp

!IF  "$(CFG)" == "OxoMemory - Win32 Release"

DEP_CPP_BMPBU=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\BmpButton.obj" : $(SOURCE) $(DEP_CPP_BMPBU) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


!ELSEIF  "$(CFG)" == "OxoMemory - Win32 Debug"

DEP_CPP_BMPBU=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\BmpButton.obj" : $(SOURCE) $(DEP_CPP_BMPBU) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\AboutOxo.cpp

!IF  "$(CFG)" == "OxoMemory - Win32 Release"

DEP_CPP_ABOUT=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\AboutOxo.obj" : $(SOURCE) $(DEP_CPP_ABOUT) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


!ELSEIF  "$(CFG)" == "OxoMemory - Win32 Debug"

DEP_CPP_ABOUT=\
	".\AboutOxo.h"\
	".\BmpButton.h"\
	".\MainFrm.h"\
	".\MDIClient.h"\
	".\MemoryWindow.h"\
	".\OXOButton.h"\
	".\OxoMemory.h"\
	".\OXOWindow.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\AboutOxo.obj" : $(SOURCE) $(DEP_CPP_ABOUT) "$(INTDIR)"\
 "$(INTDIR)\OxoMemory.pch"


!ENDIF 

# End Source File
# End Target
# End Project
################################################################################
