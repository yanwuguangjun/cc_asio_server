import { describe, expect, test } from '@jest/globals';
import { Socket } from 'net'

let sock = new Socket()
let sock2 = new Socket()


describe('socket module', () => {
	sock.connect({ port: 55555, host: '127.0.0.1' })
	sock2.connect({ port: 55555, host: '127.0.0.1' })
	sock.write("hello");

	test('connect socket', async () => {
		let res = await new Promise((reslove,reject)=>{
			sock.on('data',(data)=>{
				reslove(data.toString())
				sock.destroy()
				sock2.destroy()
			})
		}) 

		expect( res).toBe('hello');
	});
});

