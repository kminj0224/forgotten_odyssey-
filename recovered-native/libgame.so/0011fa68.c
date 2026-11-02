/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011fa68  Symbol: Re_Lode */

/* Tutorial_Layer::Re_Lode() */

void Tutorial_Layer::Re_Lode(void)

{
  char *in_r0;
  undefined uVar1;
  int iVar2;
  float in_s0;
  float in_s1;
  CCPoint local_30 [8];
  CCPoint local_28 [8];
  CCPoint local_20 [8];
  CCPoint local_18 [8];
  CCPoint local_10 [8];
  
  iVar2 = *(int *)(**(int **)(DAT_0011fb40 + 0x11fa74) +
                   (**(int **)(DAT_0011fb48 + 0x11fa7e) + DAT_0011fb44) * 4 + 4);
  *(int *)(in_r0 + 0x110) = iVar2;
  if (iVar2 == 0xc) {
    cocos2d::CCPoint::CCPoint(local_30,in_s0,in_s1);
    iVar2 = DAT_0011fb54 + 0x11faac;
  }
  else {
    if (iVar2 != 0xd) {
      if (iVar2 == 0xf) {
        cocos2d::CCPoint::CCPoint(local_20,in_s0,in_s1);
        iVar2 = DAT_0011fb6c + 0x11faec;
      }
      else {
        if (iVar2 == 0x13) {
          cocos2d::CCPoint::CCPoint(local_18,in_s0,in_s1);
          iVar2 = DAT_0011fb70 + 0x11fb0e;
          goto LAB_0011fb0c;
        }
        if (iVar2 != 0x15) {
          return;
        }
        cocos2d::CCPoint::CCPoint(local_10,in_s0,in_s1);
        iVar2 = DAT_0011fb78 + 0x11fb34;
      }
      uVar1 = 6;
      goto LAB_0011fb38;
    }
    cocos2d::CCPoint::CCPoint(local_28,in_s0,in_s1);
    iVar2 = DAT_0011fb60 + 0x11facc;
  }
LAB_0011fb0c:
  uVar1 = 5;
LAB_0011fb38:
  TutorialWithLayrTouch(in_r0,iVar2,(bool)uVar1,false,0);
  return;
}


