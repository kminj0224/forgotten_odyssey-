/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd0c8  Symbol: ParseNumber<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>> */

/* WARNING: Removing unreachable block (ram,0x000bd1d2) */
/* WARNING: Removing unreachable block (ram,0x000bd222) */
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::ParseNumber<2u,
   rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >&) */

void __thiscall
rapidjson::
GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
::
ParseNumber<2u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,GenericStringStream *param_1,GenericDocument *param_2)

{
  bool bVar1;
  bool bVar2;
  GenericValue *pGVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint local_44;
  byte *local_40;
  int local_2c;
  byte *local_24;
  
  local_40 = *(byte **)param_1;
  iVar10 = *(int *)(param_1 + 4);
  bVar11 = *local_40 == 0x2d;
  if (bVar11) {
    local_40 = local_40 + 1;
  }
  local_44 = (uint)*local_40;
  local_40 = local_40 + 1;
  if (local_44 == 0x30) {
    local_44 = 0;
LAB_000bd176:
    bVar1 = false;
    uVar15 = 0;
    goto LAB_000bd23c;
  }
  if ((0x30 < local_44) && (local_44 < 0x3a)) {
    local_44 = local_44 - 0x30;
    if (bVar11) {
      for (; (uVar5 = (uint)*local_40, 0x2f < uVar5 && (uVar5 < 0x3a)); local_40 = local_40 + 1) {
        if ((DAT_000bd420 < local_44) && ((local_44 != DAT_000bd424 || (uVar5 == 0x39))))
        goto LAB_000bd536;
        local_44 = local_44 * 10 + -0x30 + uVar5;
      }
    }
    else {
      for (; (uVar5 = (uint)*local_40, 0x2f < uVar5 && (uVar5 < 0x3a)); local_40 = local_40 + 1) {
        if ((DAT_000bd418 < local_44) && ((local_44 != DAT_000bd41c || (0x35 < uVar5))))
        goto LAB_000bd536;
        local_44 = local_44 * 10 + -0x30 + uVar5;
      }
    }
    goto LAB_000bd176;
  }
  iVar10 = DAT_000bd5a0 + 0xbd530;
  goto LAB_000bd3cc;
LAB_000bd234:
  bVar1 = true;
  goto LAB_000bd23c;
LAB_000bd54e:
  uVar13 = __floatundidf((int)uVar15,(int)(uVar15 >> 0x20));
  while( true ) {
    uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar5 = (uint)*local_40;
    if (uVar5 < 0x30) break;
    if (0x39 < uVar5) {
      bVar2 = true;
      bVar1 = true;
      goto LAB_000bd2ac;
    }
    local_40 = local_40 + 1;
    iVar7 = __aeabi_dcmpge((int)uVar13,uVar6,DAT_000bd410,DAT_000bd414);
    if (iVar7 != 0) {
      iVar10 = DAT_000bd438 + 0xbd250;
      goto LAB_000bd3cc;
    }
    uVar13 = __muldf3((int)uVar13,uVar6,DAT_000bd408,DAT_000bd40c);
    uVar14 = __floatsidf(uVar5 - 0x30);
    uVar13 = __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                      (int)((ulonglong)uVar14 >> 0x20));
  }
  bVar2 = true;
  bVar1 = true;
  goto LAB_000bd2ac;
LAB_000bd536:
  uVar15 = (ulonglong)local_44;
  if (bVar11) {
    uVar15 = (ulonglong)local_44;
    while( true ) {
      uVar5 = (uint)*local_40;
      if (uVar5 < 0x30) break;
      if (0x39 < uVar5) goto LAB_000bd234;
      if ((CONCAT44(DAT_000bd424,DAT_000bd42c) < uVar15) &&
         ((uVar15 != CONCAT44(DAT_000bd424,DAT_000bd428) || (uVar5 == 0x39)))) goto LAB_000bd54e;
      lVar12 = __muldi3((int)uVar15,(int)(uVar15 >> 0x20),10,0);
      local_40 = local_40 + 1;
      uVar15 = lVar12 + (int)(uVar5 - 0x30);
    }
  }
  else {
    while( true ) {
      uVar5 = (uint)*local_40;
      if (uVar5 < 0x30) break;
      if (0x39 < uVar5) goto LAB_000bd234;
      if ((CONCAT44(DAT_000bd41c,DAT_000bd434) < uVar15) &&
         ((uVar15 != CONCAT44(DAT_000bd41c,DAT_000bd430) || (0x35 < uVar5)))) goto LAB_000bd54e;
      lVar12 = __muldi3((int)uVar15,(int)(uVar15 >> 0x20),10,0);
      local_40 = local_40 + 1;
      uVar15 = lVar12 + (int)(uVar5 - 0x30);
    }
  }
  bVar1 = true;
LAB_000bd23c:
  uVar13 = CONCAT44(DAT_000bd404,DAT_000bd400);
  bVar2 = false;
LAB_000bd2ac:
  local_2c = 0;
  if (*local_40 == 0x2e) {
    if (!bVar2) {
      if (bVar1) {
        uVar13 = __floatundidf((int)uVar15,(int)(uVar15 >> 0x20));
        bVar2 = true;
      }
      else {
        uVar13 = __floatunsidf(local_44);
        bVar2 = true;
      }
    }
    uVar5 = (uint)local_40[1];
    if ((0x2f < uVar5) && (uVar5 < 0x3a)) {
      uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_000bd408,DAT_000bd40c);
      local_24 = local_40 + 2;
      uVar14 = __floatsidf(uVar5 - 0x30);
      uVar13 = __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                        (int)((ulonglong)uVar14 >> 0x20));
      local_2c = -1;
      while( true ) {
        uVar5 = (uint)*local_24;
        local_40 = local_24;
        if ((uVar5 < 0x30) || (0x39 < uVar5)) break;
        if (local_2c + 0xf < 0 == SCARRY4(local_2c,0xf)) {
          uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_000bd408,DAT_000bd40c);
          uVar14 = __floatsidf(uVar5 - 0x30);
          uVar13 = __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                            (int)((ulonglong)uVar14 >> 0x20));
          local_2c = local_2c + -1;
        }
        local_24 = local_24 + 1;
      }
      goto LAB_000bd366;
    }
    iVar10 = DAT_000bd5a4 + 0xbd56c;
  }
  else {
LAB_000bd366:
    if ((*local_40 != 0x65) && (*local_40 != 0x45)) {
      if (bVar2) {
        iVar7 = 0;
LAB_000bd452:
        uVar6 = DAT_000bd580;
        uVar9 = DAT_000bd584;
        if (DAT_000bd588 <= iVar7 + local_2c) {
          puVar8 = (undefined4 *)(*(int *)(DAT_000bd58c + 0xbd466) + (iVar7 + local_2c + 0x134) * 8)
          ;
          uVar6 = *puVar8;
          uVar9 = puVar8[1];
        }
        uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar6,uVar9);
        iVar7 = (int)((ulonglong)uVar13 >> 0x20);
        if (bVar11) {
          iVar7 = iVar7 + -0x80000000;
        }
        puVar8 = (undefined4 *)
                 internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
                 Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                           ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)
                            (param_2 + 0x10),1);
        uVar6 = DAT_000bd590;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = (int)uVar13;
          puVar8[1] = iVar7;
          puVar8[3] = uVar6;
        }
      }
      else if (bVar1) {
        if (bVar11) {
          pGVar3 = internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
                   Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                             ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)
                              (param_2 + 0x10),1);
          if (pGVar3 != (GenericValue *)0x0) {
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::GenericValue(uVar15);
          }
        }
        else {
          GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::Uint64(uVar15);
        }
      }
      else {
        if (bVar11) {
          puVar4 = (uint *)internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                           ::
                           Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                                     ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                       *)(param_2 + 0x10),1);
          if (puVar4 == (uint *)0x0) goto LAB_000bd51c;
          puVar4[3] = DAT_000bd594;
          *puVar4 = -local_44;
          puVar4[1] = (int)-local_44 >> 0x1f;
          if (0 < (int)local_44) goto LAB_000bd51c;
        }
        else {
          puVar4 = (uint *)internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                           ::
                           Push<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>
                                     ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                       *)(param_2 + 0x10),1);
          uVar5 = DAT_000bd598;
          if (puVar4 == (uint *)0x0) goto LAB_000bd51c;
          *puVar4 = local_44;
          puVar4[3] = uVar5;
          puVar4[1] = 0;
          if ((int)local_44 < 0) goto LAB_000bd51c;
        }
        puVar4[3] = DAT_000bd59c;
      }
LAB_000bd51c:
      *(byte **)param_1 = local_40;
      *(int *)(param_1 + 4) = iVar10;
      return;
    }
    if (!bVar2) {
      if (bVar1) {
        uVar13 = __floatundidf((int)uVar15,(int)(uVar15 >> 0x20));
      }
      else {
        uVar13 = __floatunsidf(local_44);
      }
    }
    if (local_40[1] == 0x2b) {
      local_40 = local_40 + 2;
LAB_000bd3a0:
      bVar1 = false;
    }
    else {
      if (local_40[1] != 0x2d) {
        local_40 = local_40 + 1;
        goto LAB_000bd3a0;
      }
      local_40 = local_40 + 2;
      bVar1 = true;
    }
    uVar5 = (uint)*local_40;
    if ((uVar5 < 0x30) || (0x39 < uVar5)) {
      *(int *)(this + 0x118) = DAT_000bd5a8 + 0xbd578;
      *(int *)(this + 0x11c) = (int)local_40 - iVar10;
      goto LAB_000bd3d4;
    }
    iVar7 = uVar5 - 0x30;
    do {
      local_40 = local_40 + 1;
      uVar5 = (uint)*local_40;
      if ((uVar5 < 0x30) || (0x39 < uVar5)) {
        if (bVar1) {
          iVar7 = -iVar7;
        }
        goto LAB_000bd452;
      }
      iVar7 = iVar7 * 10 + (uVar5 - 0x30);
    } while (iVar7 < 0x135);
    iVar10 = DAT_000bd43c + 0xbd3ce;
  }
LAB_000bd3cc:
  *(int *)(this + 0x118) = iVar10;
  *(int *)(this + 0x11c) = *(int *)param_1 - *(int *)(param_1 + 4);
LAB_000bd3d4:
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(this + 0x18),1);
}


