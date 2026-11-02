/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144b70  Symbol: convertToGL */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00144bae) */
/* WARNING: Removing unreachable block (ram,0x00144bae) */
/* cocos2d::CCDirector::convertToGL(cocos2d::CCPoint const&) */

CCPoint * cocos2d::CCDirector::convertToGL(CCPoint *param_1)

{
  CCPoint CVar1;
  CCPoint CVar2;
  int in_r1;
  CCPoint *in_r2;
  undefined4 uVar3;
  CCPoint CVar4;
  CCPoint CVar5;
  CCPoint CVar6;
  float extraout_s0;
  float extraout_s1;
  CCPoint local_28;
  CCPoint local_24;
  CCPoint local_20;
  CCPoint local_1c;
  
  uVar3 = *(undefined4 *)(in_r1 + 100);
  CVar5 = in_r2[1];
  CVar1 = __subsf3(*(undefined4 *)(in_r1 + 0x68),CVar5);
  CVar6 = *in_r2;
  CVar2 = __subsf3(uVar3,CVar6);
  uVar3 = *(undefined4 *)(in_r1 + 0x84);
  CVar4 = *(CCPoint *)(DAT_00144bec + 0x144bbe);
  *param_1 = *(CCPoint *)(DAT_00144bec + 0x144bba);
  param_1[1] = CVar4;
  switch(uVar3) {
  case 0:
    CCPoint::CCPoint((CCPoint *)&local_28,extraout_s0,extraout_s1);
    *param_1 = local_28;
    local_1c = local_24;
    break;
  case 1:
    CCPoint::CCPoint((CCPoint *)&local_20,extraout_s0,extraout_s1);
    *param_1 = local_20;
    break;
  case 2:
    *param_1 = CVar5;
    param_1[1] = CVar6;
    return param_1;
  case 3:
    param_1[1] = CVar2;
    *param_1 = CVar1;
    return param_1;
  default:
    return param_1;
  }
  param_1[1] = local_1c;
  return param_1;
}


