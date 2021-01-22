/**
 * @file <argos3/plugins/robots/spiri/simulator/spiri_distance_scanner_default_actuator.h>
 *
 * @author Carlo Pinciroli - <ilpincy@gmail.com>
 */

#ifndef SPIRI_DISTANCE_SCANNER_DEFAULT_ACTUATOR_H
#define SPIRI_DISTANCE_SCANNER_DEFAULT_ACTUATOR_H

#include <string>
#include <map>

namespace argos {
   class CSpiriDistanceScannerDefaultActuator;
}

#include <argos3/plugins/robots/spiri/control_interface/ci_spiri_distance_scanner_actuator.h>
#include <argos3/plugins/robots/spiri/simulator/spiri_entity.h>
#include <argos3/plugins/robots/spiri/simulator/spiri_distance_scanner_equipped_entity.h>
#include <argos3/core/simulator/actuator.h>

namespace argos {

   class CSpiriDistanceScannerDefaultActuator : public CSimulatedActuator,
                                                  public CCI_SpiriDistanceScannerActuator {

   public:

  	  static const Real RPM_TO_RADIANS_PER_SEC;

      CSpiriDistanceScannerDefaultActuator();
      virtual ~CSpiriDistanceScannerDefaultActuator() {}

      virtual void SetRobot(CComposableEntity& c_entity);

      virtual void SetAngle(const CRadians& c_angle);
      virtual void SetRPM(Real f_rpm);

      virtual void Enable();
      virtual void Disable();

      virtual void Update();
      virtual void Reset();

   private:

      CSpiriDistanceScannerEquippedEntity* m_pcDistanceScannerEquippedEntity;

      CRadians m_cDesiredRotation;
      Real     m_fDesiredRotationSpeed;
      UInt8    m_unDesiredMode;

   };

}

#endif
