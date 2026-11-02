/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119200  Symbol: StateModeInit */

/* StateMode::StateModeInit(int, void*, int, int, int) */

void __thiscall
StateMode::StateModeInit
          (StateMode *this,int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(int *)(*(int *)((int)param_2 + 4) + (iVar1 + 0x38) * 4 + 4) == 0) &&
       (*(int *)((iVar1 + 0x36) * 4 + *(int *)((int)param_2 + 4)) == 0xb)) {
      Set_KG_State_Long_Distance_Unbeatable(this);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  return;
}


