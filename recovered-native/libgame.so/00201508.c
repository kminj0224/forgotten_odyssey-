/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00201508  Symbol: __dynamic_cast */

int __dynamic_cast(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  
  piVar1 = *(int **)(*param_1 + -4);
  local_24 = 0x10;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  (**(code **)(*piVar1 + 0x1c))
            (piVar1,param_4,6,param_3,(int)param_1 + *(int *)(*param_1 + -8),param_2,param_1,
             &local_34);
  if (((local_34 != 0) && ((local_28 & 6) != 6)) && ((local_2c & local_30 & 6) != 6)) {
    if (((local_2c & 5) == 4) || (local_28 != 0)) {
      local_34 = 0;
    }
    else {
      if (param_4 < 0) {
        if ((param_4 != -2) &&
           (uVar2 = (**(code **)(*param_3 + 0x20))(param_3,param_4,local_34,param_2,param_1),
           (uVar2 & 6) == 6)) {
          return local_34;
        }
      }
      else if (param_1 == (int *)(local_34 + param_4)) {
        return local_34;
      }
      local_34 = 0;
    }
  }
  return local_34;
}


