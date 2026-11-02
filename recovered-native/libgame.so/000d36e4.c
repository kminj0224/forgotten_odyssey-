/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d36e4  Symbol: Draw_Base_Count_or_Total_Number */

/* SkillTreeLayer::Draw_Base_Count_or_Total_Number(int) */

void __thiscall SkillTreeLayer::Draw_Base_Count_or_Total_Number(SkillTreeLayer *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  CCTexture2D *pCVar4;
  code *pcVar5;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar6;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  int local_60;
  int local_5c;
  int local_58;
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d3870 + 0xd36f2));
  local_60 = 0;
  do {
    local_58 = local_60 << 2;
    local_5c = 0xf;
    do {
      if (8 < local_58) {
        return;
      }
      piVar2 = (int *)cocos2d::CCLayer::node();
      pcVar5 = *(code **)(*piVar2 + 0x3c);
      __floatsisf(local_5c);
      uVar6 = __floatsisf(local_60 * -0x2d + 0x5c);
      cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
      (*pcVar5)(piVar2,aCStack_48);
      (**(code **)(*(int *)this + 0xcc))(this,piVar2,100,100);
      piVar3 = (int *)Draw_Number::node();
      pcVar5 = *(code **)(*piVar3 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0,extraout_s1);
      uVar6 = (*pcVar5)(piVar3,aCStack_40);
      pcVar5 = *(code **)(*piVar3 + 0x74);
      cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
      (*pcVar5)(piVar3,aCStack_38);
      (**(code **)(*piVar2 + 0xcc))(piVar2,piVar3,1,1);
      Draw_Number::SetNumberFont((Draw_Number *)piVar3,9);
      Draw_Number::SetNumber
                ((Draw_Number *)piVar3,
                 (int)*(char *)(**(int **)(DAT_000d387c + 0xd3790) +
                                **(int **)(DAT_000d3878 + 0xd378c) * 0x6c + param_1 * 0xc + local_58
                               + DAT_000d3880),2);
      pCVar4 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
      piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4);
      pcVar5 = *(code **)(*piVar3 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_00,extraout_s1_00);
      (*pcVar5)(piVar3,aCStack_30);
      (**(code **)(*piVar2 + 0xcc))(piVar2,piVar3,1,1);
      piVar3 = (int *)Draw_Number::node();
      pcVar5 = *(code **)(*piVar3 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_01,extraout_s1_01);
      uVar6 = (*pcVar5)(piVar3,aCStack_28);
      pcVar5 = *(code **)(*piVar3 + 0x74);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
      (*pcVar5)(piVar3,aCStack_20);
      (**(code **)(*piVar2 + 0xcc))(piVar2,piVar3,2,2);
      Draw_Number::SetNumberFont((Draw_Number *)piVar3,10);
      Draw_Number::SetNumber((Draw_Number *)piVar3,10,0);
      local_58 = local_58 + 1;
      local_5c = local_5c + 0x30;
    } while (local_5c != 0xcf);
    local_60 = local_60 + 1;
  } while (local_60 != 3);
  return;
}


