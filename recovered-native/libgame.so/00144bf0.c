/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144bf0  Symbol: convertToUI */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00144c1a) */
/* WARNING: Removing unreachable block (ram,0x00144c1a) */
/* cocos2d::CCDirector::convertToUI(cocos2d::CCPoint const&) */

CCPoint * cocos2d::CCDirector::convertToUI(CCPoint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_r1;
  undefined4 *in_r2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float in_s0;
  float in_s1;
  undefined8 uVar7;
  CCPoint local_38;
  CCPoint local_34;
  CCPoint local_30;
  CCPoint local_2c;
  CCPoint local_28;
  CCPoint local_24;
  CCPoint local_20;
  CCPoint local_1c;
  
  iVar1 = DAT_00144c94;
  uVar6 = *in_r2;
  uVar5 = in_r2[1];
  uVar3 = *(undefined4 *)(in_r1 + 100);
  uVar4 = *(undefined4 *)(in_r1 + 0x68);
  *param_1 = *(CCPoint *)(DAT_00144c94 + 0x144c18);
  uVar2 = *(undefined4 *)(in_r1 + 0x84);
  param_1[1] = *(CCPoint *)(iVar1 + 0x144c1c);
  switch(uVar2) {
  case 0:
    uVar7 = __subsf3(uVar4,uVar5);
    CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    *param_1 = local_38;
    local_1c = local_34;
    break;
  case 1:
    uVar7 = __subsf3(uVar3,uVar6);
    CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    *param_1 = local_30;
    local_1c = local_2c;
    break;
  case 2:
    CCPoint::CCPoint((CCPoint *)&local_28,in_s0,in_s1);
    *param_1 = local_28;
    local_1c = local_24;
    break;
  case 3:
    __subsf3(uVar3,uVar5);
    uVar7 = __subsf3(uVar4,uVar6);
    CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    *param_1 = local_20;
    break;
  default:
    goto switchD_00144c1a_caseD_4;
  }
  param_1[1] = local_1c;
switchD_00144c1a_caseD_4:
  return param_1;
}


