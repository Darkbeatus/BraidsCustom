#ifndef BRAIDS_UI_H_
#define BRAIDS_UI_H_

#include "stmlib/stmlib.h"
#include "braids/resources.h"
#include "braids/settings.h"

namespace braids {

enum UiState {
  UI_STATE_PULL,
  UI_STATE_EDIT_PARAM_1,
  UI_STATE_EDIT_PARAM_2
};

enum UiMode {
  UI_MODE_SETTINGS,
  UI_MODE_CALIBRATION_CV,
  UI_MODE_CALIBRATION_OCTAVE,
  UI_MODE_ABOUT
};

class Ui {
 public:
  Ui() { }
  ~Ui() { }

  void Init();
  void Poll();
  void Paint();

 private:
  ResourcesManager resources_;
  Settings settings_;
  
  UiState state_;
  UiMode mode_;
  
  uint16_t encoder_state_;
  uint32_t press_time_;
  bool evented_;

  DISALLOW_COPY_AND_ASSIGN(Ui);
};

}  // namespace braids

#endif  // BRAIDS_UI_H_
