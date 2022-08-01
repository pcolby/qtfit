# SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

# This file is automatcially generated. Any changes here are likely to be overwritten.

cmake_policy(SET CMP0076 NEW)
target_sources(QtFit
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/accelerometerdatamessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/activitymessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/antchannelidmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/antrxmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/anttxmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/aviationattitudemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/barometerdatamessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/bikeprofilemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/bloodpressuremessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/cadencezonemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/cameraeventmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/capabilitiesmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/climbpromessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/connectivitymessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/coursemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/coursepointmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/developerdataidmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/deviceinfomessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/devicesettingsmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/divealarmmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/divegasmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/divesettingsmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/divesummarymessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/eventmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/exddataconceptconfigurationmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/exddatafieldconfigurationmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/exdscreenconfigurationmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/exercisetitlemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/fieldcapabilitiesmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/fielddescriptionmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/filecapabilitiesmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/filecreatormessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/fileidmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/goalmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/gpsmetadatamessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/gyroscopedatamessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/hrmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/hrmprofilemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/hrvmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/hrzonemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/jumpmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/lapmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/lengthmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/magnetometerdatamessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/memoglobmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/mesgcapabilitiesmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/metzonemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/monitoringinfomessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/monitoringmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/nmeasentencemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/obdiidatamessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/ohrsettingsmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/onedsensorcalibrationmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/powerzonemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/recordmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/schedulemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/sdmprofilemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/segmentfilemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/segmentidmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/segmentlapmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/segmentleaderboardentrymessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/segmentpointmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/sessionmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/setmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/slavedevicemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/softwaremessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/speedzonemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/sportmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/stresslevelmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/threedsensorcalibrationmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/timestampcorrelationmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/totalsmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/trainingfilemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/userprofilemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/videoclipmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/videodescriptionmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/videoframemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/videomessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/videotitlemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/watchfacesettingsmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/weatheralertmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/weatherconditionsmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/weightscalemessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/workoutmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/workoutsessionmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/workoutstepmessage.h
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/zonestargetmessage.h
  PRIVATE accelerometerdatamessage.cpp
  PRIVATE activitymessage.cpp
  PRIVATE antchannelidmessage.cpp
  PRIVATE antrxmessage.cpp
  PRIVATE anttxmessage.cpp
  PRIVATE aviationattitudemessage.cpp
  PRIVATE barometerdatamessage.cpp
  PRIVATE bikeprofilemessage.cpp
  PRIVATE bloodpressuremessage.cpp
  PRIVATE cadencezonemessage.cpp
  PRIVATE cameraeventmessage.cpp
  PRIVATE capabilitiesmessage.cpp
  PRIVATE climbpromessage.cpp
  PRIVATE connectivitymessage.cpp
  PRIVATE coursemessage.cpp
  PRIVATE coursepointmessage.cpp
  PRIVATE developerdataidmessage.cpp
  PRIVATE deviceinfomessage.cpp
  PRIVATE devicesettingsmessage.cpp
  PRIVATE divealarmmessage.cpp
  PRIVATE divegasmessage.cpp
  PRIVATE divesettingsmessage.cpp
  PRIVATE divesummarymessage.cpp
  PRIVATE eventmessage.cpp
  PRIVATE exddataconceptconfigurationmessage.cpp
  PRIVATE exddatafieldconfigurationmessage.cpp
  PRIVATE exdscreenconfigurationmessage.cpp
  PRIVATE exercisetitlemessage.cpp
  PRIVATE fieldcapabilitiesmessage.cpp
  PRIVATE fielddescriptionmessage.cpp
  PRIVATE filecapabilitiesmessage.cpp
  PRIVATE filecreatormessage.cpp
  PRIVATE fileidmessage.cpp
  PRIVATE goalmessage.cpp
  PRIVATE gpsmetadatamessage.cpp
  PRIVATE gyroscopedatamessage.cpp
  PRIVATE hrmessage.cpp
  PRIVATE hrmprofilemessage.cpp
  PRIVATE hrvmessage.cpp
  PRIVATE hrzonemessage.cpp
  PRIVATE jumpmessage.cpp
  PRIVATE lapmessage.cpp
  PRIVATE lengthmessage.cpp
  PRIVATE magnetometerdatamessage.cpp
  PRIVATE memoglobmessage.cpp
  PRIVATE mesgcapabilitiesmessage.cpp
  PRIVATE metzonemessage.cpp
  PRIVATE monitoringinfomessage.cpp
  PRIVATE monitoringmessage.cpp
  PRIVATE nmeasentencemessage.cpp
  PRIVATE obdiidatamessage.cpp
  PRIVATE ohrsettingsmessage.cpp
  PRIVATE onedsensorcalibrationmessage.cpp
  PRIVATE powerzonemessage.cpp
  PRIVATE recordmessage.cpp
  PRIVATE schedulemessage.cpp
  PRIVATE sdmprofilemessage.cpp
  PRIVATE segmentfilemessage.cpp
  PRIVATE segmentidmessage.cpp
  PRIVATE segmentlapmessage.cpp
  PRIVATE segmentleaderboardentrymessage.cpp
  PRIVATE segmentpointmessage.cpp
  PRIVATE sessionmessage.cpp
  PRIVATE setmessage.cpp
  PRIVATE slavedevicemessage.cpp
  PRIVATE softwaremessage.cpp
  PRIVATE speedzonemessage.cpp
  PRIVATE sportmessage.cpp
  PRIVATE stresslevelmessage.cpp
  PRIVATE threedsensorcalibrationmessage.cpp
  PRIVATE timestampcorrelationmessage.cpp
  PRIVATE totalsmessage.cpp
  PRIVATE trainingfilemessage.cpp
  PRIVATE userprofilemessage.cpp
  PRIVATE videoclipmessage.cpp
  PRIVATE videodescriptionmessage.cpp
  PRIVATE videoframemessage.cpp
  PRIVATE videomessage.cpp
  PRIVATE videotitlemessage.cpp
  PRIVATE watchfacesettingsmessage.cpp
  PRIVATE weatheralertmessage.cpp
  PRIVATE weatherconditionsmessage.cpp
  PRIVATE weightscalemessage.cpp
  PRIVATE workoutmessage.cpp
  PRIVATE workoutsessionmessage.cpp
  PRIVATE workoutstepmessage.cpp
  PRIVATE zonestargetmessage.cpp
  PRIVATE accelerometerdatamessage_p.h
  PRIVATE activitymessage_p.h
  PRIVATE antchannelidmessage_p.h
  PRIVATE antrxmessage_p.h
  PRIVATE anttxmessage_p.h
  PRIVATE aviationattitudemessage_p.h
  PRIVATE barometerdatamessage_p.h
  PRIVATE bikeprofilemessage_p.h
  PRIVATE bloodpressuremessage_p.h
  PRIVATE cadencezonemessage_p.h
  PRIVATE cameraeventmessage_p.h
  PRIVATE capabilitiesmessage_p.h
  PRIVATE climbpromessage_p.h
  PRIVATE connectivitymessage_p.h
  PRIVATE coursemessage_p.h
  PRIVATE coursepointmessage_p.h
  PRIVATE developerdataidmessage_p.h
  PRIVATE deviceinfomessage_p.h
  PRIVATE devicesettingsmessage_p.h
  PRIVATE divealarmmessage_p.h
  PRIVATE divegasmessage_p.h
  PRIVATE divesettingsmessage_p.h
  PRIVATE divesummarymessage_p.h
  PRIVATE eventmessage_p.h
  PRIVATE exddataconceptconfigurationmessage_p.h
  PRIVATE exddatafieldconfigurationmessage_p.h
  PRIVATE exdscreenconfigurationmessage_p.h
  PRIVATE exercisetitlemessage_p.h
  PRIVATE fieldcapabilitiesmessage_p.h
  PRIVATE fielddescriptionmessage_p.h
  PRIVATE filecapabilitiesmessage_p.h
  PRIVATE filecreatormessage_p.h
  PRIVATE fileidmessage_p.h
  PRIVATE goalmessage_p.h
  PRIVATE gpsmetadatamessage_p.h
  PRIVATE gyroscopedatamessage_p.h
  PRIVATE hrmessage_p.h
  PRIVATE hrmprofilemessage_p.h
  PRIVATE hrvmessage_p.h
  PRIVATE hrzonemessage_p.h
  PRIVATE jumpmessage_p.h
  PRIVATE lapmessage_p.h
  PRIVATE lengthmessage_p.h
  PRIVATE magnetometerdatamessage_p.h
  PRIVATE memoglobmessage_p.h
  PRIVATE mesgcapabilitiesmessage_p.h
  PRIVATE metzonemessage_p.h
  PRIVATE monitoringinfomessage_p.h
  PRIVATE monitoringmessage_p.h
  PRIVATE nmeasentencemessage_p.h
  PRIVATE obdiidatamessage_p.h
  PRIVATE ohrsettingsmessage_p.h
  PRIVATE onedsensorcalibrationmessage_p.h
  PRIVATE powerzonemessage_p.h
  PRIVATE recordmessage_p.h
  PRIVATE schedulemessage_p.h
  PRIVATE sdmprofilemessage_p.h
  PRIVATE segmentfilemessage_p.h
  PRIVATE segmentidmessage_p.h
  PRIVATE segmentlapmessage_p.h
  PRIVATE segmentleaderboardentrymessage_p.h
  PRIVATE segmentpointmessage_p.h
  PRIVATE sessionmessage_p.h
  PRIVATE setmessage_p.h
  PRIVATE slavedevicemessage_p.h
  PRIVATE softwaremessage_p.h
  PRIVATE speedzonemessage_p.h
  PRIVATE sportmessage_p.h
  PRIVATE stresslevelmessage_p.h
  PRIVATE threedsensorcalibrationmessage_p.h
  PRIVATE timestampcorrelationmessage_p.h
  PRIVATE totalsmessage_p.h
  PRIVATE trainingfilemessage_p.h
  PRIVATE userprofilemessage_p.h
  PRIVATE videoclipmessage_p.h
  PRIVATE videodescriptionmessage_p.h
  PRIVATE videoframemessage_p.h
  PRIVATE videomessage_p.h
  PRIVATE videotitlemessage_p.h
  PRIVATE watchfacesettingsmessage_p.h
  PRIVATE weatheralertmessage_p.h
  PRIVATE weatherconditionsmessage_p.h
  PRIVATE weightscalemessage_p.h
  PRIVATE workoutmessage_p.h
  PRIVATE workoutsessionmessage_p.h
  PRIVATE workoutstepmessage_p.h
  PRIVATE zonestargetmessage_p.h
)
