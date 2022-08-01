/*
    Copyright 2021 Paul Colby

    This file is part of QtFit.

    QtFit is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtFit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtFit.  If not, see <http://www.gnu.org/licenses/>.
*/

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 *
 * Provides the AbstractDataMessage::fromData implementation.
 *
 * This is kept in a separate file so it can be safely code-generated. And also to avoid polluting
 * the abstractdatamessage.cpp file with \c \#includes for the ~100 or so AbstractDataMessage
 * descendants.
 */

#include <qtfit/abstractdatamessage.h>
#include "abstractdatamessage_p.h"

#include <qtfit/accelerometerdatamessage.h>
#include <qtfit/activitymessage.h>
#include <qtfit/antchannelidmessage.h>
#include <qtfit/antrxmessage.h>
#include <qtfit/anttxmessage.h>
#include <qtfit/aviationattitudemessage.h>
#include <qtfit/barometerdatamessage.h>
#include <qtfit/bikeprofilemessage.h>
#include <qtfit/bloodpressuremessage.h>
#include <qtfit/cadencezonemessage.h>
#include <qtfit/cameraeventmessage.h>
#include <qtfit/capabilitiesmessage.h>
#include <qtfit/climbpromessage.h>
#include <qtfit/connectivitymessage.h>
#include <qtfit/coursemessage.h>
#include <qtfit/coursepointmessage.h>
#include <qtfit/developerdataidmessage.h>
#include <qtfit/deviceinfomessage.h>
#include <qtfit/devicesettingsmessage.h>
#include <qtfit/divealarmmessage.h>
#include <qtfit/divegasmessage.h>
#include <qtfit/divesettingsmessage.h>
#include <qtfit/divesummarymessage.h>
#include <qtfit/eventmessage.h>
#include <qtfit/exddataconceptconfigurationmessage.h>
#include <qtfit/exddatafieldconfigurationmessage.h>
#include <qtfit/exdscreenconfigurationmessage.h>
#include <qtfit/exercisetitlemessage.h>
#include <qtfit/fieldcapabilitiesmessage.h>
#include <qtfit/fielddescriptionmessage.h>
#include <qtfit/filecapabilitiesmessage.h>
#include <qtfit/filecreatormessage.h>
#include <qtfit/fileidmessage.h>
#include <qtfit/goalmessage.h>
#include <qtfit/gpsmetadatamessage.h>
#include <qtfit/gyroscopedatamessage.h>
#include <qtfit/hrmessage.h>
#include <qtfit/hrzonemessage.h>
#include <qtfit/hrmprofilemessage.h>
#include <qtfit/hrvmessage.h>
#include <qtfit/jumpmessage.h>
#include <qtfit/lapmessage.h>
#include <qtfit/lengthmessage.h>
#include <qtfit/magnetometerdatamessage.h>
#include <qtfit/memoglobmessage.h>
#include <qtfit/mesgcapabilitiesmessage.h>
#include <qtfit/metzonemessage.h>
//#include <qtfit/mfgrangemaxmessage.h>
//#include <qtfit/mfgrangeminmessage.h>
#include <qtfit/monitoringmessage.h>
#include <qtfit/monitoringinfomessage.h>
#include <qtfit/nmeasentencemessage.h>
#include <qtfit/obdiidatamessage.h>
#include <qtfit/ohrsettingsmessage.h>
#include <qtfit/onedsensorcalibrationmessage.h>
//#include <qtfit/padmessage.h>
#include <qtfit/powerzonemessage.h>
#include <qtfit/recordmessage.h>
#include <qtfit/schedulemessage.h>
#include <qtfit/sdmprofilemessage.h>
#include <qtfit/segmentfilemessage.h>
#include <qtfit/segmentidmessage.h>
#include <qtfit/segmentlapmessage.h>
#include <qtfit/segmentleaderboardentrymessage.h>
#include <qtfit/segmentpointmessage.h>
#include <qtfit/sessionmessage.h>
#include <qtfit/setmessage.h>
#include <qtfit/slavedevicemessage.h>
#include <qtfit/softwaremessage.h>
#include <qtfit/speedzonemessage.h>
#include <qtfit/sportmessage.h>
#include <qtfit/stresslevelmessage.h>
#include <qtfit/threedsensorcalibrationmessage.h>
#include <qtfit/timestampcorrelationmessage.h>
#include <qtfit/totalsmessage.h>
#include <qtfit/trainingfilemessage.h>
#include <qtfit/userprofilemessage.h>
#include <qtfit/videomessage.h>
#include <qtfit/videoclipmessage.h>
#include <qtfit/videodescriptionmessage.h>
#include <qtfit/videoframemessage.h>
#include <qtfit/videotitlemessage.h>
#include <qtfit/watchfacesettingsmessage.h>
#include <qtfit/weatheralertmessage.h>
#include <qtfit/weatherconditionsmessage.h>
#include <qtfit/weightscalemessage.h>
#include <qtfit/workoutmessage.h>
#include <qtfit/workoutsessionmessage.h>
#include <qtfit/workoutstepmessage.h>
#include <qtfit/zonestargetmessage.h>

QTFIT_BEGIN_NAMESPACE

/*!
 * Constructs the relevant AbstractDataMessage-derived class to parse \a record according to \a defn.
 *
 * \param defn   Definition data describing the FIT \a record.
 * \param record FIT data record to parse.
 *
 * \return an instance of a AbstractDataMessage-derived class, or \c nullptr if \a record could not be parsed.
 */
AbstractDataMessage * AbstractDataMessage::fromData(const DataDefinition * const defn, const QByteArray &record)
{
    Q_ASSERT(defn);
    AbstractDataMessage * message = nullptr;
    switch (defn->globalMessageNumber) {
    case MesgNum::FileId                     : message = new FileIdMessage              ; break;
    case MesgNum::Capabilities               : message = new CapabilitiesMessage        ; break;
    case MesgNum::DeviceSettings             : message = new DeviceSettingsMessage      ; break;
    case MesgNum::UserProfile                : message = new UserProfileMessage         ; break;
    case MesgNum::HrmProfile                 : message = new HrmProfileMessage          ; break;
    case MesgNum::SdmProfile                 : message = new SdmProfileMessage          ; break;
    case MesgNum::BikeProfile                : message = new BikeProfileMessage         ; break;
    case MesgNum::ZonesTarget                : message = new ZonesTargetMessage         ; break;
    case MesgNum::HrZone                     : message = new HrZoneMessage              ; break;
    case MesgNum::PowerZone                  : message = new PowerZoneMessage           ; break;
    case MesgNum::MetZone                    : message = new MetZoneMessage             ; break;
    case MesgNum::Sport                      : message = new SportMessage               ; break;
    case MesgNum::Goal                       : message = new GoalMessage                ; break;
    case MesgNum::Session                    : message = new SessionMessage             ; break;
    case MesgNum::Lap                        : message = new LapMessage                 ; break;
    case MesgNum::Record                     : message = new RecordMessage              ; break;
    case MesgNum::Event                      : message = new EventMessage               ; break;
    case MesgNum::DeviceInfo                 : message = new DeviceInfoMessage          ; break;
    case MesgNum::Workout                    : message = new WorkoutMessage             ; break;
    case MesgNum::WorkoutStep                : message = new WorkoutStepMessage         ; break;
    case MesgNum::Schedule                   : message = new ScheduleMessage            ; break;
    case MesgNum::WeightScale                : message = new WeightScaleMessage         ; break;
    case MesgNum::Course                     : message = new CourseMessage              ; break;
    case MesgNum::CoursePoint                : message = new CoursePointMessage         ; break;
    case MesgNum::Totals                     : message = new TotalsMessage              ; break;
    case MesgNum::Activity                   : message = new ActivityMessage            ; break;
    case MesgNum::Software                   : message = new SoftwareMessage            ; break;
    case MesgNum::FileCapabilities           : message = new FileCapabilitiesMessage    ; break;
    case MesgNum::MesgCapabilities           : message = new MesgCapabilitiesMessage    ; break;
    case MesgNum::FieldCapabilities          : message = new FieldCapabilitiesMessage   ; break;
    case MesgNum::FileCreator                : message = new FileCreatorMessage         ; break;
    case MesgNum::BloodPressure              : message = new BloodPressureMessage       ; break;
    case MesgNum::SpeedZone                  : message = new SpeedZoneMessage           ; break;
    case MesgNum::Monitoring                 : message = new MonitoringMessage          ; break;
    case MesgNum::TrainingFile               : message = new TrainingFileMessage        ; break;
    case MesgNum::Hrv                        : message = new HrvMessage                 ; break;
    case MesgNum::AntRx                      : message = new AntRxMessage               ; break;
    case MesgNum::AntTx                      : message = new AntTxMessage               ; break;
    case MesgNum::AntChannelId               : message = new AntChannelIdMessage        ; break;
    case MesgNum::Length                     : message = new LengthMessage              ; break;
    case MesgNum::MonitoringInfo             : message = new MonitoringInfoMessage      ; break;
    case MesgNum::Pad                        : message = nullptr; break;
    case MesgNum::SlaveDevice                : message = new SlaveDeviceMessage         ; break;
    case MesgNum::Connectivity               : message = new ConnectivityMessage        ; break;
    case MesgNum::WeatherConditions          : message = new WeatherConditionsMessage   ; break;
    case MesgNum::WeatherAlert               : message = new WeatherAlertMessage        ; break;
    case MesgNum::CadenceZone                : message = new CadenceZoneMessage         ; break;
    case MesgNum::Hr                         : message = new HrMessage                  ; break;
    case MesgNum::SegmentLap                 : message = new SegmentLapMessage          ; break;
    case MesgNum::MemoGlob                   : message = new MemoGlobMessage            ; break;
    case MesgNum::SegmentId                  : message = new SegmentIdMessage           ; break;
    case MesgNum::SegmentLeaderboardEntry    : message = new SegmentLeaderboardEntryMessage; break;
    case MesgNum::SegmentPoint               : message = new SegmentPointMessage        ; break;
    case MesgNum::SegmentFile                : message = new SegmentFileMessage         ; break;
    case MesgNum::WorkoutSession             : message = new WorkoutSessionMessage      ; break;
    case MesgNum::WatchfaceSettings          : message = new WatchfaceSettingsMessage   ; break;
    case MesgNum::GpsMetadata                : message = new GpsMetadataMessage         ; break;
    case MesgNum::CameraEvent                : message = new CameraEventMessage         ; break;
    case MesgNum::TimestampCorrelation       : message = new TimestampCorrelationMessage; break;
    case MesgNum::GyroscopeData              : message = new GyroscopeDataMessage       ; break;
    case MesgNum::AccelerometerData          : message = new AccelerometerDataMessage   ; break;
    case MesgNum::ThreeDSensorCalibration    : message = new ThreeDSensorCalibrationMessage; break;
    case MesgNum::VideoFrame                 : message = new VideoFrameMessage          ; break;
    case MesgNum::ObdiiData                  : message = new ObdiiDataMessage           ; break;
    case MesgNum::NmeaSentence               : message = new NmeaSentenceMessage        ; break;
    case MesgNum::AviationAttitude           : message = new AviationAttitudeMessage    ; break;
    case MesgNum::Video                      : message = new VideoMessage               ; break;
    case MesgNum::VideoTitle                 : message = new VideoTitleMessage          ; break;
    case MesgNum::VideoDescription           : message = new VideoDescriptionMessage    ; break;
    case MesgNum::VideoClip                  : message = new VideoClipMessage           ; break;
    case MesgNum::OhrSettings                : message = new OhrSettingsMessage         ; break;
    case MesgNum::ExdScreenConfiguration     : message = new ExdScreenConfigurationMessage; break;
    case MesgNum::ExdDataFieldConfiguration  : message = new ExdDataFieldConfigurationMessage; break;
    case MesgNum::ExdDataConceptConfiguration: message = new ExdDataConceptConfigurationMessage; break;
    case MesgNum::FieldDescription           : message = new FieldDescriptionMessage    ; break;
    case MesgNum::DeveloperDataId            : message = new DeveloperDataIdMessage     ; break;
    case MesgNum::MagnetometerData           : message = new MagnetometerDataMessage    ; break;
    case MesgNum::BarometerData              : message = new BarometerDataMessage       ; break;
    case MesgNum::OneDSensorCalibration      : message = new OneDSensorCalibrationMessage; break;
    case MesgNum::Set                        : message = new SetMessage                 ; break;
    case MesgNum::StressLevel                : message = new StressLevelMessage         ; break;
    case MesgNum::DiveSettings               : message = new DiveSettingsMessage        ; break;
    case MesgNum::DiveGas                    : message = new DiveGasMessage             ; break;
    case MesgNum::DiveAlarm                  : message = new DiveAlarmMessage           ; break;
    case MesgNum::ExerciseTitle              : message = new ExerciseTitleMessage       ; break;
    case MesgNum::DiveSummary                : message = new DiveSummaryMessage         ; break;
    case MesgNum::Jump                       : message = new JumpMessage                ; break;
    case MesgNum::ClimbPro                   : message = new ClimbProMessage            ; break;
    case MesgNum::MfgRangeMin                : message = nullptr; break;
    case MesgNum::MfgRangeMax                : message = nullptr; break;
    }
    if (message) {
        message->d_ptr->setFields(defn, record);
    }
    return message;
}

QTFIT_END_NAMESPACE
