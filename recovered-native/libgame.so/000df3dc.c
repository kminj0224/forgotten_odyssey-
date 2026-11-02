/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000df3dc  Symbol: update */

/* Market_Hero::update(float) */

float Market_Hero::update(float param_1)

{
  int *in_r0;
  int iVar1;
  float fVar2;
  
  iVar1 = in_r0[0x48];
  if (iVar1 == 1) {
    fVar2 = (float)UI_Loding();
  }
  else {
    if (iVar1 == 2) {
      in_r0[0x47] = 2;
      Number_Loding((Market_Hero *)in_r0);
      **(undefined4 **)(DAT_000df464 + 0xdf41a) = 2;
      in_r0[0x48] = 0;
      *(Market_Hero *)(in_r0 + 0x44) = (Market_Hero)0x0;
      Hero_img_Draw((Market_Hero *)in_r0,
                    (int)*(char *)(**(int **)(DAT_000df468 + 0xdf42c) +
                                   **(int **)(DAT_000df46c + 0xdf434) + DAT_000df470 + 4));
      SetHeroState((Market_Hero *)in_r0);
      remove_Self_Loding((Market_Hero *)in_r0);
      *(Market_Hero *)(in_r0 + 0x49) = (Market_Hero)0x1;
      fVar2 = (float)cocos2d::CCNode::unscheduleUpdate((CCNode *)in_r0);
      return fVar2;
    }
    if (iVar1 != 0) {
      in_r0[0x48] = iVar1 + 1;
      return param_1;
    }
    fVar2 = (float)(**(code **)(*in_r0 + 0x114))(in_r0,1);
  }
  in_r0[0x48] = in_r0[0x48] + 1;
  return fVar2;
}


