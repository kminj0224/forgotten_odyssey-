/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a57ec  Symbol: FUN_001a57ec */

void FUN_001a57ec(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_001a5814;
  piVar2 = (int *)param_2[1];
  *piVar2 = *param_2;
  *(int **)(*param_2 + 4) = piVar2;
  if (*(code **)(param_1 + 4) != (code *)0x0) {
    (**(code **)(param_1 + 4))(param_2);
  }
  (***(code ***)(iVar1 + 0x1a57fe + DAT_001a5818))(param_2);
  return;
}


