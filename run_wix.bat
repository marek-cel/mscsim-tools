call run_wix_clean.bat

copy mscsim-aero\src\mscsim-aero.ico mscsim-aero.ico
copy mscsim-asm3d\src\mscsim-asm3d.ico mscsim-asm3d.ico
copy mscsim-fgrec\src\mscsim-fgrec.ico mscsim-fgrec.ico
copy mscsim-mass\src\mscsim-mass.ico mscsim-mass.ico

call %QTDIR%/bin/qtenv2.bat

cd /D "%~dp0"

echo %cd%

rmdir /S /Q bin
rmdir /S /Q qt

mkdir bin
copy mscsim-aero\bin\mscsim-aero.exe bin\
copy mscsim-asm3d\bin\mscsim-asm3d.exe bin\
copy mscsim-fgrec\bin\mscsim-fgrec.exe bin\
copy mscsim-mass\bin\mscsim-mass.exe bin\

mkdir qt
mkdir qt\bin
copy /y bin\*.exe qt\bin
copy "%QTDIR%\bin\Qt5OpenGL.dll" qt\bin

rem cd qt\bin
rem call "%QTDIR%\bin\windeployqt.exe" --release mscsim.exe
rem cd ..\..
call "%QTDIR%\bin\windeployqt.exe" --release qt\bin\mscsim-aero.exe
call "%QTDIR%\bin\windeployqt.exe" --release qt\bin\mscsim-asm3d.exe
call "%QTDIR%\bin\windeployqt.exe" --release qt\bin\mscsim-fgrec.exe
call "%QTDIR%\bin\windeployqt.exe" --release qt\bin\mscsim-mass.exe

del qt\bin\mscsim-aero.exe
del qt\bin\mscsim-asm3d.exe
del qt\bin\mscsim-fgrec.exe
del qt\bin\mscsim-mass.exe

call "%WIX%bin\heat.exe" dir ".\qt\bin" -gg -ke -sfrag -dr dir_mscsim_tools -cg cg_mscsim_tools_qt -var var.SourceDir -template fragment -out wix_qt.wxs
call "%WIX%bin\heat.exe" dir "%OSG_ROOT%\bin\osgPlugins-3.4.0" -gg -ke -sfrag -dr dir_mscsim_tools_bin -cg cg_mscsim_tools_osg_plugins -var var.SourceDir -template fragment -out wix_osg_plugins.wxs

copy "C:\Program Files (x86)\Common Files\Merge Modules\Microsoft_VC90_CRT_x86.msm" Microsoft_VC160_CRT_x86.msm

call "%WIX%bin\candle.exe" -ext WiXUtilExtension wix_main.wxs
call "%WIX%bin\candle.exe" -ext WiXUtilExtension wix_osg.wxs
call "%WIX%bin\candle.exe" -ext WiXUtilExtension -dSourceDir="%OSG_ROOT%\bin\osgPlugins-3.4.0" wix_osg_plugins.wxs
call "%WIX%bin\candle.exe" -ext WiXUtilExtension -dSourceDir=".\qt\bin" wix_qt.wxs 
call "%WIX%bin\candle.exe" -ext WiXUtilExtension wix_qwt.wxs
call "%WIX%bin\light.exe" -ext WiXUtilExtension -ext WixUIExtension -cultures:en-us -out mscsim-tools-0.1-win64.msi wix_main.wixobj wix_osg.wixobj wix_osg_plugins.wixobj wix_qt.wixobj wix_qwt.wixobj

pause
