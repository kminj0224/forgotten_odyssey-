/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e55e4  Symbol: Image_Name */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000e5608) */
/* WARNING: Removing unreachable block (ram,0x000e5608) */
/* Market_Unit::Image_Name(int) */

void __thiscall Market_Unit::Image_Name(Market_Unit *this,int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  code *pcVar3;
  float fVar4;
  float fVar6;
  CCPoint local_a0;
  CCPoint local_9c;
  int local_98;
  int local_94;
  CCPoint local_90;
  CCPoint local_8c;
  int local_88;
  int local_84;
  CCPoint local_80;
  CCPoint local_7c;
  int local_78;
  int local_74;
  CCPoint local_70;
  CCPoint local_6c;
  int local_68;
  int local_64;
  CCPoint local_60;
  CCPoint local_5c;
  int local_58;
  int local_54;
  CCPoint local_50;
  CCPoint local_4c;
  int local_48;
  int local_44;
  CCPoint local_40;
  CCPoint local_3c;
  int local_38;
  int local_34;
  CCPoint local_30;
  CCPoint local_2c;
  int local_28;
  int local_24;
  CCPoint local_20;
  CCPoint local_1c;
  int local_18;
  int local_14;
  undefined8 uVar5;
  
  pcVar3 = *(code **)(*(int *)this + 0xd0);
  uVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  uVar5 = (*pcVar3)(this,uVar1,1);
  fVar6 = (float)((ulonglong)uVar5 >> 0x20);
  fVar4 = (float)uVar5;
  switch(param_1) {
  case 0:
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_a0,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_98,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar2 = (char *)(DAT_000e57d4 + 0xe563a);
    local_40 = local_a0;
    local_3c = local_9c;
    local_38 = local_98;
    local_34 = local_94;
    break;
  case 1:
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar2 = (char *)(DAT_000e57dc + 0xe569a);
    local_40 = local_80;
    local_3c = local_7c;
    local_38 = local_78;
    local_34 = local_74;
    break;
  case 2:
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_90,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar2 = (char *)(DAT_000e57d8 + 0xe566a);
    local_40 = local_90;
    local_3c = local_8c;
    local_38 = local_88;
    local_34 = local_84;
    break;
  case 3:
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar2 = (char *)(DAT_000e57e0 + 0xe56ca);
    local_40 = local_70;
    local_3c = local_6c;
    local_38 = local_68;
    local_34 = local_64;
    break;
  case 4:
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar2 = (char *)(DAT_000e57f0 + 0xe578a);
    local_40 = local_30;
    local_3c = local_2c;
    local_38 = local_28;
    local_34 = local_24;
    break;
  case 5:
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar2 = (char *)(DAT_000e57f4 + 0xe57ba);
    local_40 = local_20;
    local_3c = local_1c;
    local_38 = local_18;
    local_34 = local_14;
    break;
  case 6:
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar2 = (char *)(DAT_000e57e4 + 0xe56fa);
    local_40 = local_60;
    local_3c = local_5c;
    local_38 = local_58;
    local_34 = local_54;
    break;
  case 7:
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar2 = (char *)(DAT_000e57e8 + 0xe572a);
    local_40 = local_50;
    local_3c = local_4c;
    local_38 = local_48;
    local_34 = local_44;
    break;
  case 8:
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar2 = (char *)(DAT_000e57ec + 0xe575a);
    break;
  default:
    goto switchD_000e5608_caseD_9;
  }
  vDrawFrame((CCNode *)this,pcVar2,local_40,local_3c,local_38,local_34);
switchD_000e5608_caseD_9:
  return;
}


