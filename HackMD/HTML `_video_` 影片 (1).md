---
title: HTML `<video>` 影片
tags: [HTML簡報, ' <video>', ' 影片']

---

---
type: slide
tags: HTML簡報, <video>, 影片
---

{%hackmd @dzif24x25/yRBnguqQQl-2ylH1j5h0cg %}

# HTML `<video>` 影片

---

## `<video>`
可用來播放影片或影音串流

---

## `<video>` 語法

```htmlembedded
<video src="影片連結"></video>
```

---

### 屬性：

* `autoplay`: 布林 (boolean) 屬性，控制是否自動播放影片，預設是 `false`
* `loop`: 布林 (boolean) 屬性，控制是否重複播放影片，預設是 `false`
* `muted`: 布林 (boolean) 屬性，控制是否靜音，預設是 `false`
* `controls`: 布林 (boolean) 屬性，指定是否顯示影音控制面板，由瀏覽器提供上面會有播放進度、暫停鈕、播放鈕、靜音鈕等，預設是 `false`

---

### 範例：

```htmlembedded=
<p>muted=true autoplay=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" muted=true autoplay=true width=100%></video>
```

```htmlembedded=
<p>controls</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls width=100%></video>
```

```htmlembedded=
<p>controls muted=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls muted=true width=100%></video>
```

```htmlembedded=
<p>controls muted=true autoplay=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls muted=true autoplay=true width=100%></video>
```

---

<p>muted=true autoplay=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" muted=true autoplay=true width=100%></video>

---

<p>controls</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls width=100%></video>

---

<p>controls muted=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls muted=true width=100%></video>

---

<p>controls muted=true autoplay=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls muted=true autoplay=true width=100%></video>
