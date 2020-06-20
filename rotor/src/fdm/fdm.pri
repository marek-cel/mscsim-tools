HEADERS += \
    $$PWD/fdm_Base.h \
    $$PWD/fdm_DataInp.h \
    $$PWD/fdm_DataOut.h \
    $$PWD/fdm_Defines.h \
    $$PWD/fdm_Exception.h \
    $$PWD/fdm_Log.h \
    $$PWD/fdm_Path.h \
    $$PWD/fdm_Recorder.h \
    $$PWD/fdm_Test.h \
    $$PWD/fdm_Types.h

SOURCES += \
    $$PWD/fdm_Base.cpp \
    $$PWD/fdm_Log.cpp \
    $$PWD/fdm_Recorder.cpp \
    $$PWD/fdm_Test.cpp

################################################################################

HEADERS += \
    $$PWD/main/fdm_Aerodynamics.h \
    $$PWD/main/fdm_Aircraft.h \
    $$PWD/main/fdm_Controls.h \
    $$PWD/main/fdm_Environment.h \
    $$PWD/main/fdm_Intersections.h \
    $$PWD/main/fdm_LandingGear.h \
    $$PWD/main/fdm_Mass.h \
    $$PWD/main/fdm_Module.h \
    $$PWD/main/fdm_Propulsion.h

SOURCES += \
    $$PWD/main/fdm_Aerodynamics.cpp \
    $$PWD/main/fdm_Aircraft.cpp \
    $$PWD/main/fdm_Controls.cpp \
    $$PWD/main/fdm_Environment.cpp \
    $$PWD/main/fdm_Intersections.cpp \
    $$PWD/main/fdm_LandingGear.cpp \
    $$PWD/main/fdm_Mass.cpp \
    $$PWD/main/fdm_Propulsion.cpp

################################################################################

HEADERS += \
    $$PWD/models/fdm_Atmosphere.h \
    $$PWD/models/fdm_Blade.h \
    $$PWD/models/fdm_Engine.h \
    $$PWD/models/fdm_Fuselage.h \
    $$PWD/models/fdm_Governor.h \
    $$PWD/models/fdm_HingeMoment.h \
    $$PWD/models/fdm_MainRotor.h \
    $$PWD/models/fdm_MainRotorAD.h \
    $$PWD/models/fdm_MainRotorBE.h \
    $$PWD/models/fdm_PistonEngine.h \
    $$PWD/models/fdm_Propeller.h \
    $$PWD/models/fdm_Schrenk.h \
    $$PWD/models/fdm_SimpleRotor.h \
    $$PWD/models/fdm_Stabilizer.h \
    $$PWD/models/fdm_TailOff.h \
    $$PWD/models/fdm_TailRotor.h \
    $$PWD/models/fdm_Turbofan.h \
    $$PWD/models/fdm_WindShear.h

SOURCES += \
    $$PWD/models/fdm_Atmosphere.cpp \
    $$PWD/models/fdm_Blade.cpp \
    $$PWD/models/fdm_Fuselage.cpp \
    $$PWD/models/fdm_Governor.cpp \
    $$PWD/models/fdm_HingeMoment.cpp \
    $$PWD/models/fdm_MainRotor.cpp \
    $$PWD/models/fdm_MainRotorAD.cpp \
    $$PWD/models/fdm_MainRotorBE.cpp \
    $$PWD/models/fdm_PistonEngine.cpp \
    $$PWD/models/fdm_Propeller.cpp \
    $$PWD/models/fdm_Schrenk.cpp \
    $$PWD/models/fdm_SimpleRotor.cpp \
    $$PWD/models/fdm_Stabilizer.cpp \
    $$PWD/models/fdm_TailOff.cpp \
    $$PWD/models/fdm_TailRotor.cpp \
    $$PWD/models/fdm_Turbofan.cpp \
    $$PWD/models/fdm_WindShear.cpp

################################################################################

HEADERS += \
    $$PWD/utils/fdm_Angles.h \
    $$PWD/utils/fdm_EulerRect.h \
    $$PWD/utils/fdm_GaussJordan.h \
    $$PWD/utils/fdm_Integrator.h \
    $$PWD/utils/fdm_Matrix.h \
    $$PWD/utils/fdm_Matrix3x3.h \
    $$PWD/utils/fdm_Matrix4x4.h \
    $$PWD/utils/fdm_Matrix6x6.h \
    $$PWD/utils/fdm_Misc.h \
    $$PWD/utils/fdm_Period.h \
    $$PWD/utils/fdm_Quaternion.h \
    $$PWD/utils/fdm_Random.h \
    $$PWD/utils/fdm_RungeKutta4.h \
    $$PWD/utils/fdm_String.h \
    $$PWD/utils/fdm_Table.h \
    $$PWD/utils/fdm_Table2D.h \
    $$PWD/utils/fdm_Time.h \
    $$PWD/utils/fdm_Units.h \
    $$PWD/utils/fdm_Vector.h \
    $$PWD/utils/fdm_Vector3.h \
    $$PWD/utils/fdm_Vector4.h \
    $$PWD/utils/fdm_Vector6.h \
    $$PWD/utils/fdm_WGS84.h

SOURCES += \
    $$PWD/utils/fdm_Angles.cpp \
    $$PWD/utils/fdm_Matrix3x3.cpp \
    $$PWD/utils/fdm_Matrix4x4.cpp \
    $$PWD/utils/fdm_Matrix6x6.cpp \
    $$PWD/utils/fdm_Period.cpp \
    $$PWD/utils/fdm_Quaternion.cpp \
    $$PWD/utils/fdm_Random.cpp \
    $$PWD/utils/fdm_String.cpp \
    $$PWD/utils/fdm_Table.cpp \
    $$PWD/utils/fdm_Table2D.cpp \
    $$PWD/utils/fdm_Units.cpp \
    $$PWD/utils/fdm_Vector3.cpp \
    $$PWD/utils/fdm_Vector4.cpp \
    $$PWD/utils/fdm_Vector6.cpp \
    $$PWD/utils/fdm_WGS84.cpp

################################################################################

HEADERS += \
    $$PWD/xml/fdm_XmlDoc.h \
    $$PWD/xml/fdm_XmlNode.h \
    $$PWD/xml/fdm_XmlUtils.h

SOURCES += \
    $$PWD/xml/fdm_XmlDoc.cpp \
    $$PWD/xml/fdm_XmlNode.cpp \
    $$PWD/xml/fdm_XmlUtils.cpp
