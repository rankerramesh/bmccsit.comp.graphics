package bdlearn;

import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import javax.swing.*;
import sun.audio.AudioPlayer;
import sun.audio.AudioStream;

/**
 *
 * @author aphacker
 */
public class ctesting extends javax.swing.JInternalFrame {

      
    
    
    public static void playMusic(String filepath){
      
       
        
        
        InputStream music;
        try{
            music= new FileInputStream(new File(filepath));
            AudioStream audios = new AudioStream(music);
            AudioPlayer.player.start(audios);
            System.out.print("hello");
        }
        catch(Exception e){
        }
        
    }

}