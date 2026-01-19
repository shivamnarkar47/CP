package main

import (
	"bufio"
	"os"
)

var (
	reader = bufio.NewReader(os.Stdin)
	writer = bufio.NewWriter(os.Stdout)
)

func nextInt() int {
	sign, val := 1, 0
	c, _ := reader.ReadByte()
	for (c < '0' || c > '9') && c != '-' {
		c, _ = reader.ReadByte()
	}
	if c == '-' {
		sign = -1
		c, _ = reader.ReadByte()
	}
	for c >= '0' && c <= '9' {
		val = val*10 + int(c-'0')
		c, _ = reader.ReadByte()
	}
	return sign * val
}

func nextString() string {
	c, _ := reader.ReadByte()
	for c == ' ' || c == '\n' || c == '\r' || c == '\t' {
		c, _ = reader.ReadByte()
	}
	var sb []byte
	for c != ' ' && c != '\n' && c != '\r' && c != '\t' && c != 0 {
		sb = append(sb, c)
		c, _ = reader.ReadByte()
	}
	return string(sb)
}

func printInt(x int) {
	if x == 0 {
		writer.WriteByte('0')
		return
	}
	if x < 0 {
		writer.WriteByte('-')
		x = -x
	}
	var digits []byte
	for x > 0 {
		digits = append([]byte{byte('0' + x%10)}, digits...)
		x /= 10
	}
	writer.Write(digits)
}

func printStr(s string) {
	writer.WriteString(s)
}

func flush() {
	writer.Flush()
}
