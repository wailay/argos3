/**
 * @file <argos3/plugins/robots/spiri/simulator/spiri_proximity_default_sensor.h>
 *
 * @author Carlo Pinciroli - <ilpincy@gmail.com>
 */

#ifndef SPIRI_PROXIMITY_DEFAULT_SENSOR_H
#define SPIRI_PROXIMITY_DEFAULT_SENSOR_H

#include <string>
#include <map>

namespace argos {
   class CSpiriProximityDefaultSensor;
}

#include <argos3/plugins/robots/spiri/control_interface/ci_spiri_proximity_sensor.h>
#include <argos3/plugins/robots/generic/simulator/proximity_default_sensor.h>

namespace argos {

   class CSpiriProximityDefaultSensor : public CCI_SpiriProximitySensor,
                                          public CSimulatedSensor {

   public:

      CSpiriProximityDefaultSensor();

      virtual ~CSpiriProximityDefaultSensor();

      virtual void SetRobot(CComposableEntity& c_entity);

      virtual void Init(TConfigurationNode& t_tree);

      virtual void Update();

      virtual void Reset();

   private:

      CProximityDefaultSensor* m_pcProximityImpl;

   };

}

#endif
