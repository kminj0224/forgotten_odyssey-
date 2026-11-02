/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010f388  Symbol: File_Hero_Icon_Lode */

/* New_UI::File_Hero_Icon_Lode() */

void New_UI::File_Hero_Icon_Lode(void)

{
  char cVar1;
  CCNode *in_r0;
  char *pcVar2;
  int iVar3;
  CCSpriteFrameCache *pCVar4;
  float in_s0;
  float in_s1;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  CCPoint local_18;
  int local_14;
  
  iVar3 = DAT_0010f474 + 0x10f394;
  cVar1 = *(char *)(**(int **)(iVar3 + DAT_0010f478) + **(int **)(iVar3 + DAT_0010f47c) +
                    DAT_0010f480 + 4);
  if (cVar1 == '\x01') {
    pCVar4 = **(CCSpriteFrameCache ***)(iVar3 + DAT_0010f484);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,in_s0,in_s1);
    pcVar2 = (char *)(DAT_0010f490 + 0x10f3cc);
  }
  else if (cVar1 == '\x02') {
    pCVar4 = **(CCSpriteFrameCache ***)(iVar3 + DAT_0010f484);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,in_s0,in_s1);
    pcVar2 = (char *)(DAT_0010f494 + 0x10f3f2);
    local_38 = local_30;
    local_34 = local_2c;
  }
  else if (cVar1 == '\x04') {
    pCVar4 = **(CCSpriteFrameCache ***)(iVar3 + DAT_0010f484);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,in_s0,in_s1);
    pcVar2 = (char *)(DAT_0010f498 + 0x10f418);
    local_38 = local_28;
    local_34 = local_24;
  }
  else if (cVar1 == '\x03') {
    pCVar4 = **(CCSpriteFrameCache ***)(iVar3 + DAT_0010f484);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,in_s0,in_s1);
    pcVar2 = (char *)(DAT_0010f49c + 0x10f43e);
    local_38 = local_20;
    local_34 = local_1c;
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    pCVar4 = **(CCSpriteFrameCache ***)(iVar3 + DAT_0010f484);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,in_s0,in_s1);
    pcVar2 = (char *)(DAT_0010f4a0 + 0x10f468);
    local_38 = local_18;
    local_34 = local_14;
  }
  vDrawFrame(pCVar4,in_r0,pcVar2,local_38,local_34,0x16);
  return;
}


