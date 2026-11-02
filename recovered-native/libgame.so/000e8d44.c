/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e8d44  Symbol: Draw_PopUp */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000e8d52) */
/* WARNING: Removing unreachable block (ram,0x000e8d52) */
/* ReinforcementLayer::Draw_PopUp(int, int, void*) */

void __thiscall
ReinforcementLayer::Draw_PopUp(ReinforcementLayer *this,int param_1,int param_2,void *param_3)

{
  switch(param_1) {
  case 0:
    Lode_File();
    break;
  case 1:
    Lode_File1();
    break;
  case 2:
    Lode_File2((int)this,(void *)param_2);
    break;
  case 3:
    Lode_File3(this,param_2,param_3);
    break;
  case 4:
    Lode_File4(this,param_2,param_3);
  }
  return;
}


